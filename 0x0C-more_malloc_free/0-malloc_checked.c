#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of bytes to allocate.
 *
 * Return: Pointer to the allocated memory.
 *         If malloc fails, the function should cause normal process
 *         termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
