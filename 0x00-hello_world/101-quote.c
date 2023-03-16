#include<stdio.h>
/**
 * main -Enter point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	const char* msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	const int len = 54;
	const int err = 2;
	(void) fwrite(err, msg, len);
	return (1);
}
