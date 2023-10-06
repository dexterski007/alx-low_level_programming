#include <stdio.h>

/**
 * main -  Entry point
 *
 * Description: putchar number combination 4 digits
 *
 * Return: Always 0
 */

int main(void)

{
	int car;
	int car2;
	int car3;
	int car4;

	for (car = 0; car < 10; car++)
	{
		for (car2 = 0 ; car2 < 10; car2++)
		{
			for (car3 = 0 ; car3 < 10; car3++)
			{
				for (car4 = 0 ; car4 < 10; car4++)
					if (car3 != car || car4 != car2)
					{
						putchar(car + '0');
						putchar(car2 + '0');
						putchar(' ');
						putchar(car3 + '0');
						putchar(car4 + '0');

		if (!(car == 9 && car2 == 8 && car3 == 9 && car4 == 8))
		{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	}

	putchar('\n');

	return (0);
}
