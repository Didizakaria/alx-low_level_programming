#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len = 0, s2_len = 0, i, j;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;

	new_str = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new_str[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		new_str[i] = s2[j];

	new_str[i] = '\0';

	return (new_str);
}
