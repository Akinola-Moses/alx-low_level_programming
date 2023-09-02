#include <stdio.h>

/**
 * main - Print all arguement passed.
 * @argc: Argument count.
 * @argv: Arument vector(array).
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int idx;

	for (idx = 0; idx < argc; idx++)
	{
		printf("%s\n", argv[idx]);
	}
	return (0);
}
