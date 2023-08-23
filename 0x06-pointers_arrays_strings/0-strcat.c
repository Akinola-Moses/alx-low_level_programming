#include "main.h"

/**
 * *_strcat - Concatenates two strings.
 * @dest: Destination where the string will be appended.
 * @src: The source wher the string will be taken from.
 * Return: pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	for (; *dest != '\0'; dest++)
	{

	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		*dest = '\0';
	}
	return (ptr);
}
