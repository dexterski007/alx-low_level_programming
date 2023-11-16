void tortoise(void) __attribute__((constructor));
#include <stdio.h>
/**
 * tortoise - before rabbit
 */

void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
