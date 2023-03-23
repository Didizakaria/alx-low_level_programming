#include "holberton.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14.
 * Description: can onlye use _putchar 3 times
 */
void more_numbers(void)
{
	int u, d;

	u = 0;
	while (u < 10)
	{
		d = 0;
		while (d < 15)
		{
			if (d > 9)
				_putchar(d / 10 + '0');

			_putchar(d % 10 + '0');
			d++;
		}
		u++;
		_putchar('\n');
	}
}
