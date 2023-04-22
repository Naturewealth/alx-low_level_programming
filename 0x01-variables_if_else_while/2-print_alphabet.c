#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print the alphabets in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
