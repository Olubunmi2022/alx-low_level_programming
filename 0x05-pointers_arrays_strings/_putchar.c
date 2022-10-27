#inlcude <unistd.h>

/**
 * _ptchar - writes character c to standout
 * @c: char to be  printed
 * Return: On success 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
