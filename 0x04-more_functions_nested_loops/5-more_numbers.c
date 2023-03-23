#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: no return
 */
void more_numbers(void)
{
	int t;
	int i;

	for (t = 48; t <= 57; t++)
	{
		for (i = 48; i <= 62; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
