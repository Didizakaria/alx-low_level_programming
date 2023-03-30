#include "main.h"
/**
 * _strcat - function that concatenate two string
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string to dest
 */
char *_strcat(char *dest, char *src)
{
	int st1, st2;

	for (st1 = 0; dest[st1] != '\0'; st1++)
		;

	for (st2 = 0; src[st2] != '\0'; st2++)
	{
		dest[st1] = src[st2];
		st1++;
	}
	dest[st1] = '\0';
	return (dest);
}
