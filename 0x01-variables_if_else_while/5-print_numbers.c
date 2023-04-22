#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers from 0 to0 9, then a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");
	return (0);
}
