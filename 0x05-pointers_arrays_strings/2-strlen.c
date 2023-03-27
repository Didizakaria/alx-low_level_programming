#include "main.h"

/**
 * int _strlen - length of a string
 *
 * @s: parameter
 *
 * Return: returns the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
