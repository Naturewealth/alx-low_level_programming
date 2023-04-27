#include "main'h"

/**
 * _putchar - writes the character c to standout
 * @c: the character to print
 *
 * Return: On success !
 */
int_putchar(char c)
{
	return (write(1, &c, 1));

}
