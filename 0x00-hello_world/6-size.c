#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0(Success)
 * */
int main(void)
{
	printf("Size of char: %ld byte(s)", sizeof(char));
	printf("Size of short: %ld byte(s)", sizeof(short));
	printf("Size of int: %ld byte(s)", sizeof(int));
	printf("Size of long int: %ld byte(s)", sizeof(long int));
	printf("Size of long long int: %ld byte(s)", sizeof(long long int));
	printf("Size of float: %ld byte(s)", sizeof(float));
	printf("Size of double: %ld byte(s)", sizeof(double));
	printf("Size of long double: %ld byte(s)", sizeof(long double));
	printf("Size of pointer: %ld byte(s)", sizeof(void *));
	return (0);
}
