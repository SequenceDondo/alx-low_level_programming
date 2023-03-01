nclude "main.h"

/**
 *  * cap_string - function that capitalizes words of a string
 *   * @s: argument of chsr to be capitalized
 *    * Return: Returns the address or pointer
 *     */
char *cap_string(char *s)
{
		int i = 0, j;
			char a[] = " \t\n,;.!?\"(){}";

				while (*(s + i))
						{
									if (*(s + i) >= 'a' && *(s + i) <= 'z')
												{
																if (i == 0)
																					*(s + i) -= 'a' - 'A';
																			else
																							{
																												for (j = 0; j <= 12; j++)
																																	{
																																							if (a[j] == *(s + i - 1))
																																														*(s + i) -= 'a' - 'A';
																																											}
																															}
																					}
											i++;
												}
					return (s);
}
