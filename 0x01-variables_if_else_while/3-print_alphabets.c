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
	char upp;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (upp = 'A'; upp <= 'Z'; upp++)
		putchar(upp);
	putchar('\n');
	return (0);
}


