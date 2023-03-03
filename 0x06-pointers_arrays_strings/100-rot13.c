#include "main.h"
/**
 * rot13 - encrypts code
 * @s: string to encrypt
 * Return: char value
 */
char *rot13(char *s)
{
	char p1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char p2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int a;
	int b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{

		for (b = 0; p1[b] != '\0'; b++)
		{
			if (s[a] == p1[b])
			{
				s[a] = p2[b];
				break;
			}
		}
	}
	return (s);
}

