#include "main.h"

/**
* main - _strncpy  C function that a copies a string.
* terminating null byte, using at most an input number of bytes.
* if the length of the source string is less than the maximum byte number,
* the remainder of the destination string is filled with null bytes.
* works identically to the standard libarary function 'strcpy'.
*@dest: buffer storing storing  the string copy
*@src:the source string
*@n:max number of byte copied
*Return: always(success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (0);
}
