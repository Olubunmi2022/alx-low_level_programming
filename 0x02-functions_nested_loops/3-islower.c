#include "main"

/**
 * _islower - to check if character is lowercase
 * @c: the character
 * Return: 1 if letter is lower, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
