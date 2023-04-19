#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Include the necessary libraries */
#include <stdio.h>

/* Function prototypes */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
