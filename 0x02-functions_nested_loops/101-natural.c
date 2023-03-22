#include <stdio.h>

/**
 * main - function
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
        int sum;
	sum = 0;

	for (x = 0 ; x < 10 ; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum = sum + x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
