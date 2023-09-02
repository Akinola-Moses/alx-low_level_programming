#include <stdio.h>

/**
 * main - Prints the number of argument passed.
 * @argc: The count.
 * @argv: The arguement vector.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	if (argc >= 1)
	{
		printf("%i\n", argc - 1);
	}
	return (0);
}
