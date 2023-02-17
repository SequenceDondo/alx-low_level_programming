#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function for the body
 * Return: Returns 0
 */

int main(void)
{
	char ch;

	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

