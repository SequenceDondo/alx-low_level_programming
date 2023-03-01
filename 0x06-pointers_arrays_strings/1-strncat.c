nclude "main.h"
#include <string.h>
/**
 * * _strncat - The main function that concatenates strings and accepts pointers
 * * @dest: Argument pointers pointing to a char datatype
 * * @src : Argument pointer pointing to a char datatype
 * * @n : An integer argument
 * * Return: Returns dest
 * */
char *_strncat(char *dest, char *src, int n)
{
		int lenght = strlen(dest);

			int i = 0;

				while (i < n)
						{
									dest[lenght] = src[i];
											i++;
													lenght++;
														}
					return (dest);
}
