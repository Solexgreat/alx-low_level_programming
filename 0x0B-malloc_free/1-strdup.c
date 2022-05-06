#include "main.h"
#include <stdlib.h>
/**
  *_strdup - returns a pointer to a newly alloctaed
  *space in memory which contains a copy of the string
  *passed.
  *@str: pointer to string being duplicated.
  *
  *Return: NULL if str is NULL.
  *pointer to duplicated string on success.
  *NULL if memory was insufficient.
  */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int n, len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
		return (NULL);

	for (n = 0; n < len; n++)
	{
		nstr[n] = str[n];
	}
	nstr[n] = '\0';
	return (nstr);

}
