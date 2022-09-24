#include <stdio.h>

/**
 * main - print Upper and lowercase using the put funcion
 *
 * Return: always (success)
 */
int main(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
	{
		putchar(v);
	}
	for (v = 'A'; v <= 'Z' v++)
	{
		putchar(v);
	}
	putchar('\n');
	return (0);
}
