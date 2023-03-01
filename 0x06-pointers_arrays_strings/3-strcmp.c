nclude "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * * _strcmp - The main function
 * * @s1 : Pointer pointing to char datatype
 * * @s2 : Pointer pointing to char datatype
 * * Return: Returns an integer value
 * */
int _strcmp(char *s1, char *s2)
{
		int n;

			int i = 0;

				int *val;

					val = malloc(sizeof(int));

						if (strlen(s1) < strlen(s2))
								{
											n =  strlen(s2);
												}
							else
									{
												n = strlen(s1);
													}
								while (i < n)
										{
													if (s1[i] != s2[i])
																{
																				*val = (s1[i] - 48) - (s2[i] - 48);
																							break;
																									}
															i++;
																}
									return (*val);
}
