#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Generate random valids paasword.
 *
 * Return: 0.
 * 
 */

int main(void)
{
	int l;
	int rd = 0;
	int sum;
	time_t pt;


	sum = 0;
	srand((unsigned int) time(&pt));
	
	for (l = 0; sum < 2772; l++)
	{
		rd = rand() % 128;
		if (sum + rd > 2772)
		{
			break;
		}
		sum = sum + rd;
		printf("%c", rd);
	}
	printf("%c\n", 2772 - sum);
	return (0);
}
