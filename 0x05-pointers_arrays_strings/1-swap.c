#include "main.h"

/**
 * swap _int -> given two integers swap
 * @a : parameter 1
 * @b : parameter 2
 */
void swap _int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
