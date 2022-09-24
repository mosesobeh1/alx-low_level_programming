#include <stdio.h>

/**
 * main - print lowercase with putchar functin
 * main - ommit alphabets q and e
 *
 *  Return: always (success)
 */
int main(void)
{
	char xavi;

	for (xavi = 'a'; xavi <= 'z'; xavi++)
	{
		if (xavi != 'e' && xavi != 'q')
		{
			putchar(xavi);
		}
	}
	putchar('\n');
	return (0);
}
