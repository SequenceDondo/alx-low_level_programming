#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - main function
* Return: Return 0
*/

int main(void)
{
	char ch;

	char e = 'e';

	char q = 'q';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != e && ch != q)
			putchar(ch);
	}
	putchar('\n');
	return (0);
}

