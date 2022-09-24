#include <stdio.h>

/**
 * main - Print lowerscase alphabet in reverse
 *
 * Return: Always(success)
 */
int main(void)
{
	char v;

	for (v = 'z'; v <= 'a'; v--)
	{
		putchar(v);
	}
	putchar('\n');
	return (0);
}
