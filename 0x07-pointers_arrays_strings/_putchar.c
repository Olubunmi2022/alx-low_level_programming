#include <unistd.h>

/**
 * _putchar - writes the character c to standout
 * @c: char to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
