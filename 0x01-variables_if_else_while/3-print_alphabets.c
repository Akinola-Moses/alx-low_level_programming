#include <stdio.h>

/**
 * main - Print the alphabetin lower and uppercase.
 *
 * Retutn: 0 (Always).
 */
int main(void)
{
	char alph;
	
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	for (alph = 'A'; alph <= 'Z'; alph++)
	       	putchar(alph);
	}
	putchar('\n');
	return (0);
}
