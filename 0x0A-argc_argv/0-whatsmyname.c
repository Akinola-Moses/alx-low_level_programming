#include "stdio.h"

/**
 * main - Print the program name.
 * @argc:The count.
 * @argv:The arguement vector.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
