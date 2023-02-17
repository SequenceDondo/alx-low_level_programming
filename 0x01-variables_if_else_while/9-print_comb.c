#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function for the body
 * Return: Returns 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

