#include "main.h"

int _atoi(char *s)
{
        int neg = 1;
        int i = 0;
	int fuse = 0;
        unsigned int digit = 0;

        while (s[i])
        {
        if (s[i] == '-')
        {
        neg = -1;
	}
        while (s[i] >= '0' && s[i] <= '9')
        {
	fuse = 1;
        digit = (digit * 10) + (s[i] - '0');
        i++;
        }
	if (fuse == 1)
	{
	break;
	}
	i++;
	}
        digit = digit * neg;
        return (digit);
}
