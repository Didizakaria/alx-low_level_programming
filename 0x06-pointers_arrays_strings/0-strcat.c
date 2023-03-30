#include "main.h"
/**
 * *_strcat(char *dest, char *src)
 *
 * @*dest: first parameter
 * @*src: second parameter
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_index = 0;
	
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_index] != '\0')
	{
		dest[dest_len] = src[src_index];
		dest_len++;
		src_index++;
	}
	dest[dest_len] = '\0';
	return dest;
}
