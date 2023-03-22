#include "main.h"

/**
 * print_last_digit - function that prints last digit
 *
 * @i: function parameter
 * Return: x
 */

int print_last_digit(int i)
{
	int x;

	x = i % 10;
		if (i < 0)
			x = -x;
		_putchar(x + '0');
	return (x);
}
