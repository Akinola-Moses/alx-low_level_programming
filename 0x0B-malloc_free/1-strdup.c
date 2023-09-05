#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - Make a copy of a string using malloc for allocation.
 * @str: Original string.
 *
 * Return: Pointer to it or NULL.
 */

char *_strdup(char *str)
{
	char *str1;
	int idx = 0;
	int l = 0;
	
	if (str == NULL)
	{
		return (NULL);
	}
	
	for (; str[l] != '\0'; l++)
	{
		
	}
	
	str1 = malloc(sizeof(char) * (l + 1));
	
	if (str1 == NULL)
	{
		return (NULL);
	}
	
	for (; idx < l; idx++)
	{
		str1[idx]= str[idx];
	}
	str1[idx] = '\0';
	return (str1);
	
}
