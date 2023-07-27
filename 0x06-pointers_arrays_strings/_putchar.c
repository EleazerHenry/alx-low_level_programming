#include <unistd.h>

/**
 * _putchar - writes the character   to stdout
 * @c: he character to print
 *
 * Return: On sucess 1.
 * On ERROR, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1 &c, 1));
}
