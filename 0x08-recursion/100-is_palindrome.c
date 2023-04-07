#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;
	if (*s == '\0')
		return (1);
	
	while (s[len] != '\0')
		len++;

	return (check_palindrome(s, len, 0));
}

/**
 * check_palindrome - helper function for is_palindrome
 * @s: the string to check
 * @len: the length of the string
 * @i: the current index
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len, int i)
{
	if (i >= len / 2)
		return (1);
	if (s[i] != s[len - i - 1])
		return (0);
	return (check_palindrome(s, len, i + 1));
}
