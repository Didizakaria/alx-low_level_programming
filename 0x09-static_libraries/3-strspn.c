#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    char *temp = accept;

    while (*s)
    {
        while (*accept)
        {
            if (*s == *accept)
            {
                count++;
                break;
            }
            accept++;
        }

        if (!*accept)
            break;

        accept = temp;
        s++;
    }

    return count;
}

