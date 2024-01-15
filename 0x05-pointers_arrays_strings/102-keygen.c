#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int tab[100];
	int t, somme, i;
	
	i = 0;
	somme = 0;
	srand(time(NULL));
	while (i < 100)
	{
	tab[i] = (rand() % 64);
	somme += (tab[i] + '0');
	putchar(tab[i] + '0');
	i++;
	if (somme > 2700)
	{
	t = 2772 - somme - '0';
	putchar(t + '0');
	break;
	}
	}
}
