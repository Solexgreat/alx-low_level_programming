#include <stdio.h>
#include <stdlib.h>
/**
 * main - is a function that prints the name.
 *@argc: is an argument counter for char.
 *@argv: is an agument value for char.
 *Return: Returns always success.
**/

int main(int argc, char *argv[])
{
int i = 0;
int mul = 1;

if (argc >= 3)
{
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
