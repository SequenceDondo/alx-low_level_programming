nclude "main.h"

/**
 * * rot13 - Funcgion that encodes a string into rot13
 * * @s: Argument pointer variable to encode string
 * *Return: Returns pointer address of s
 * */
char *rot13(char *s)
{
		int i;

			int j;

				char a[] = "fagbhcidjeklmrnsotpuqrvwxyzHaIbJcKdLeMfNgOPQRSTUVWXYZ";

					char b[] = "nopqrstuvwxyzabcdefghijklWVmUNTOSPRQXYZABCDEFLGKJIHM";

						for (i = 0; *(s + i); i++)
								{
											for (j = 0; j < 52; j++)
														{
																		if (a[j] == *(s + i))
																						{
																											*(s + i) = b[j];
																															break;
																																		}
																				}
												}
							return (s);
}
