#include <stdio.h>

void first_print(void)__attribute__((constructor));

/**
 * first_print - prints sentence before the main function is
 * executed
 */

void first_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my hous upon my back!\n");
}
