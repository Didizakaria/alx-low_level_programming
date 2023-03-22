#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * retun: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	largest = a;
	if (b > largest)
	{
		largest = b;
	}
	if (c > largest)
	{
		largest = c;
	}

	return (largest);
}

