#include "main.h"

/**
 * _islower - to check for alphabets
 * @c: character to be checked
 *
 * Return: 1 if charater is a letter,0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
