#include <stdio.h>

/**
 * main - print alpha excluding q and e.
 *
 * Return: 0 (Always).
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'q' && lc != 'e')
			putchar(lc);
	}
	putchar('\n');
	return (0);
}
