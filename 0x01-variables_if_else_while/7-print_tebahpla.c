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

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
