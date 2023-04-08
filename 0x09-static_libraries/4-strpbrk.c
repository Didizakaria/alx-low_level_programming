#include "main.h"

char *_strpbrk(char *s, char *accept)
{
    char *temp = accept;

    while (*s)
    {
        while (*accept)
        {
            if (*s == *accept)
                return s;
            accept++;
        }

        accept = temp;
        s++;
    }

    return NULL;
}

