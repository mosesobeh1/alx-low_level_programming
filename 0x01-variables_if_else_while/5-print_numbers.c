#include <stdio.h>

/**
 * main - print numbersin base 10 using putchar
 *
 * Return: always (success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
