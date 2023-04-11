#include "main.h"
#include <stdlib.h>

/**
 *  _strdup - returns a pointer to a newly allocated space in memory, which
 *  contains a copy of the string given as a parameter.
 *
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[len] = '\0';

	return (duplicate);
}
