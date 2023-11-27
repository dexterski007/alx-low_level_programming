#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

void show_data(unsigned char *id);
void show_version(unsigned char *id);
void show_osabi(unsigned char *id);
void show_abi_version(unsigned char *id);
void validate_elf(unsigned char *id);
void show_magic_numbers(unsigned char *id);
void show_class(unsigned char *id);
void show_file_type(unsigned int type, unsigned char *id);
void show_entry_point(unsigned long int entry, unsigned char *id);
void close_elf_file(int fc);

/**
 * validate_elf - validate elf
 * @id: ident
 */
void validate_elf(unsigned char *id)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (id[i] != 127 &&
		    id[i] != 'E' &&
		    id[i] != 'L' &&
		    id[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not a valid ELF file\n");
			exit(98);
		}
	}
}

/**
 * show_magic_numbers - magic system
 * @id: id
 */
void show_magic_numbers(unsigned char *id)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", id[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * show_class - class
 * @id: id
 */
void show_class(unsigned char *id)
{
	printf("  Class:                             ");

	switch (id[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", id[EI_CLASS]);
	}
}

/**
 * show_data - data
 * @id: id
 */
void show_data(unsigned char *id)
{
	printf("  Data:                              ");

	switch (id[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", id[EI_CLASS]);
	}
}

/**
 * show_version - version
 * @id: id
 */
void show_version(unsigned char *id)
{
	printf("  Version:                           %d",
	       id[EI_VERSION]);

	switch (id[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * show_osabi - osabi
 * @id: id
 */
void show_osabi(unsigned char *id)
{
	printf("  OS/ABI:                            ");

	switch (id[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", id[EI_OSABI]);
	}
}

/**
 * show_abi_version - abi
 * @id: id
 */
void show_abi_version(unsigned char *id)
{
	printf("  ABI Version:                       %d\n",
	       id[EI_ABIVERSION]);
}

/**
 * show_file_type - type
 * @type: tyype
 * @id: id
 */
void show_file_type(unsigned int type, unsigned char *id)
{
	if (id[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
	{
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	default:
		printf("<unknown: %x>\n", type);
	}
}

/**
 * show_entry_point - entry point
 * @entry: entry
 * @id: id
 */
void show_entry_point(unsigned long int entry, unsigned char *id)
{
	printf("  Entry point address:               ");

	if (id[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			  ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (id[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}

/**
 * close_elf_file - close elf
 * @fc: fc
 */
void close_elf_file(int fc)
{
	if (close(fc) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Unable to close file descriptor %d\n", fc);
		exit(98);
	}
}

/**
 * main - elf
 * @argc: args num
 * @argv: args
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fc, read_result;

	fc = open(argv[1], O_RDONLY);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to open file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf_file(fc);
		dprintf(STDERR_FILENO, "Error: Unable to allocate memory\n");
		exit(98);
	}

	read_result = read(fc, header, sizeof(Elf64_Ehdr));
	if (read_result == -1)
	{
		free(header);
		close_elf_file(fc);
		dprintf(STDERR_FILENO, "Error: Unable to read file %s\n", argv[1]);
		exit(98);
	}

	validate_elf(header->e_ident);
	printf("ELF Header:\n");
	show_magic_numbers(header->e_ident);
	show_class(header->e_ident);
	show_data(header->e_ident);
	show_version(header->e_ident);
	show_osabi(header->e_ident);
	show_abi_version(header->e_ident);
	show_file_type(header->e_type, header->e_ident);
	show_entry_point(header->e_entry, header->e_ident);

	free(header);
	close_elf_file(fc);

	return (0);
}
