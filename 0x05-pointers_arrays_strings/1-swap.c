#include "main.h"

/**
* swap_int -> given two intergers swap the values they are holding
* @a: parameter 1
* @b: parameter 2
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*a = *b;
	*b = tmp;
}
