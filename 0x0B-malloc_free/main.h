#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
char *create_array(unsigned int size, char c);
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char **strtow(char *str);
char *argstostr(int ac, char **av);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
char **split_string(char *str, char delim);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
#endif /* MAIN_H */
