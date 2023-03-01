nclude "main.h"
#include <string.h>
/**
 * * _strcat - the main pointer function
 * * @dest: Argument pointing to a datatype of char
 * * @src: Argument pointer to a datatype of char
 * * Return: char value des
 * */
char *_strcat(char *dest, char *src)
{
		int len = strlen(dest);
			int lensrc = strlen(src);
				int i = 0;

					while (i < lensrc)
							{
										dest[len] = src[i];
												i++;
														len++;
															}
						return (dest);
}
