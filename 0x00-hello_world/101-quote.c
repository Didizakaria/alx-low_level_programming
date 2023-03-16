#include<stdio.h>
/**
 * main -Enter point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, message, 39);
	return 1;
}
