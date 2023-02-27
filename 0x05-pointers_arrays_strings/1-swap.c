nclude "main.h"

/**
 * * swap_int - The main funtion that accepts two arguments
 * * @a: first parameter or argument
 * * @b: second parameter or argument
 * * Return: returns 0
 * */

void swap_int(int *a, int *b)
{
		int c;

			c = *a;
				*a = *b;
					*b = c;
}
