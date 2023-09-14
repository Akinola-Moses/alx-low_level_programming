#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * positive - Checks for positive.
 * @s: String.
 *
 * Return: 1 or 0.
 */

int positive(char *s)
{
	int idx = 0;

	for (; s[idx] != '\0'; idx++)
	{
		if ((!isdigit(s[idx])))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Add positive numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 1 or 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int idx = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (; idx < argc; idx++)
	{
		if ((positive(argv[idx])))
		{
			sum = sum + atoi(argv[idx]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", sum);
	return (0);
}
