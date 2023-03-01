nclude "main.h"
#include <string.h>
/**
 * * _strncpy - Main function
 * * @dest : char parameter
 * * @src : Pointer pointing to argument of char datatype
 * * @n : Argument of int datatype
 * * Return: Returns dest
 * */
char *_strncpy(char *dest, char *src, int n)
{
		int i = 0;

			while (i < n)
					{
								dest[i] = src[i];
										i++;
											}
				return (dest);
}
