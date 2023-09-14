#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Multiplies 2 positive number from arguments.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Res.
 */

int main(int argc, char *argv[])
{
	char *n1, *n2;
	int idx, id;
	int num1 = 0, num2 = 0, res = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = argv[1];
	n2 = argv[2];

	for (idx = 0; n1[idx] != '\0'; idx++)
	{
		if (!isdigit(n1[idx]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	for (id = 0; n2[id] != '\0'; id++)
	{
		if (!isdigit(n2[id]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	num1 = atoi(n1);
	num2 = atoi(n2);
	res = (num1 * num2);
	printf("%i\n", res);
	return (0);
}
