#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    char *start = dest;

    while (*dest)
    {
        dest++;
    }

    while (n-- > 0 && *src)
    {
        *dest++ = *src++;
    }
    *dest = '\0';

    return start;
}

