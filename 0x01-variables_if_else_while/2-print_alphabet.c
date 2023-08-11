#include <stdio.h>

/**
 * main - Print alphabet in lowercase.
 *
 * Return: 0 (Always).
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}

	putchar('\n');

	return (0);
}
