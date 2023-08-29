#include "main.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes.
 * @s: string 1.
 * @accept: string 2.
 *
 * Return: pointer or 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int l;
    for (; *s != '\0'; s++)
    {
	    l = 0;
	    while (accept[l] != '\0')
	    {
		    if (*s == accept[l])
		    {
			    return (s);
		    }
		    l++;
	    }
    }
    return ('\0');
}
