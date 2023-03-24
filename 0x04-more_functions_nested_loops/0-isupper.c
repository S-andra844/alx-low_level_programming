#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: the character to be checked
 *
 * Return: 1 for uppercase character or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c < +90)
	{
		return (1);
	}
	return (0);
}
