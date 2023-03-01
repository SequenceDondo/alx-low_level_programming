nclude "main.h"
/**
 *  * leet - Fyunction that encodes a string into 1337
 *   * @s: A pointer pointing to addrss of a string to encode
 *    * Return: Returns pointer address of char s
 *     */
char *leet(char *s)
{
		int c = 0;

			int d = 0;

				char a[] = "aAeEoOtTlL";

					char b[] = "4433007711";

						while (*(s + c))
								{
											while (d <= 9)
														{
																		if (a[d] == *(s + c))
																						{
																											*(s + c) = b[d];
																														}
																					d++;
																							}
													c++;
														}
							return (s);
}
