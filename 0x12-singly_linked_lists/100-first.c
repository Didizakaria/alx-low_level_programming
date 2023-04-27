#include <stdio.h>

void __attribute__((constructor)) calledBeforeMain();

/**
 * calledBeforeMain - function that is executed before main()
 *
 * Description: executed before main() and it prints"You're beat!..."
 * using printf().
 */
void calledBeforeMain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
