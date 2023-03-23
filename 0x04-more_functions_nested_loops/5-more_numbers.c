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

	for (t = '0'; t <= '10', t++)
	{
		for (i = '0'; i <= '14', i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
