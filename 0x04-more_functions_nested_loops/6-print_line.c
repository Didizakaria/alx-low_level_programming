#include "main.h"

/**
 * print_line - this fuction print a line
 *
 * @n: times straight line is printed.
 *
 * return: no return
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
