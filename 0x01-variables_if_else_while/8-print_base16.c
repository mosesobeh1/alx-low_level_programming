#include <stdio.h>

/**
 * main - Print numbers in base 16
 *
 * Return: always(Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
