#include <stdio.h>

/**
 * main - print lowercase alphabets in reverse, then a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');
	return (0);
}
