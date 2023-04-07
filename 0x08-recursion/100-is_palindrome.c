#include "main.h"

/**
 * _strlen_recursion - gets the length of a string recursively
 * @s: the string to get the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	
	if (len <= 1)
		return (1);

	return (_is_palindrome_helper(s, len, 0));
}

/**
 * _is_palindrome_helper - helper function for is_palindrome
 * @s: the string to check
 * @len: the length of the string
 * @i: the current index
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int _is_palindrome_helper(char *s, int len, int i)
{
	if (i >= len / 2)
		return (1);
	if (s[i] != s[len - i - 1])
		return (0);
	return (_is_palindrome_helper(s, len, i + 1));
}
