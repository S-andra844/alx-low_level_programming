#include <stdio.h>

/**
 * main - lists all the natural numbers below 1024 
 *
 * @x: variables
 *
 * @sum: variable
 *
 * Return: always 0
 */

int main(void)
{
	int x;
	sum = 0;

	for (x = 0 ; x < 1024 ; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
		{
			sum = sum + x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
