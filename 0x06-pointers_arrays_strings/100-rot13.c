#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: encode string
 */
char *rot13(char *str)
{
	int a, b;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (alpha[b] != '\0')
		{
			if (str[a] == alpha[b])
			{
				str[a] = rot[b];
				break;
			}
			b++;
		}
		a++;
	}
	return (str);
}
