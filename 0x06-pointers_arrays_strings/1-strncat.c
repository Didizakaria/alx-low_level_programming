#include "main.h"

/**
 * _strncat - function to concatenate two string
 * @dest: char string
 * @src: char string
 * @n: number of elements to concatenate
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int st1, st2;

	for (st1 = 0; dest[st1] != '\0'; st1++)
		;

	for (st2 = 0; src[st2] != '\0' && n > 0; st2++, n--, st1++)
	{
		dest[st1] = src[st2];
	}
	return (dest);
}
