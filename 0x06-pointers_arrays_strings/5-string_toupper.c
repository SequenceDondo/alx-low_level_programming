nclude "main.h"
#include <string.h>
/**
 * * string_toupper - Main function
 * * @s : Pointer  pointing to a char datatype
 * * Return: Returns a char datatype
 * */
char *string_toupper(char *s)
{
		char *ptr = s;

			int i = 0;

				int j = strlen(s);

					while (i < j)
							{
										if (s[i] >= 97 && s[i] <= 122)
													{
																	s[i] = (s[i] - 32);
																			}
												i++;
													}
						return (ptr);
}
