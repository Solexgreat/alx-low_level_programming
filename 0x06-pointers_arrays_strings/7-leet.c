#include "main.h"
/**
 * leet - encodes a string
 * @str: the string to encode
 *
 * Return: the encode string
 */
char *leet(char *str)
{
	int a, b;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (c[b] != '\0')
		{
			if (str[a] == c[b])
			{
				str[a] = n[b];
			}
			b++;
		}
		a++;
	}
	return (str);
}
