#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print alphabet in lowercase, then a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');
	return (0);
}
