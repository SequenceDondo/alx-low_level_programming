nclude "main.h"
#include <stdio.h>
/**
 * * reverse_array - Main body function
 * * @a : Pointer pointing toint array
 * * @n: argument of int datatype
 * */
void reverse_array(int *a, int n)
{
		int m = n - 1;

			int i = 1;

				for (i = m; i >= 0; i--)
						{
									if (m != n - 1)
												{
																printf(", ");
																		}
											printf("%i", a[m]);
												}
					putchar('\n');
}
