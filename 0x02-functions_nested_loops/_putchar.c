#include <unistd.h>

/**
 * putchar - writes the character c to stdoiut
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set approprately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
