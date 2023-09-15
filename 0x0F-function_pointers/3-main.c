#include <stdio.h>
#include <stdlib.h>

/**
 * main - Will perform simple operation.
 * @argc: Argument count.
 * @argv: argument vector.
 *
 * Return: The result.
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *oprt;

	if (argc !-= 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	oprt = atoi(argv[2]);
	num2 = atoi(argv[3]);

	if (get_op_func(oprt) == NULL || oprt[1] != '\0')
	{
		printf("Error\n");
		return(99);
	}


