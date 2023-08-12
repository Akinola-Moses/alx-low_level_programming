#include <stdio.h>

/**
 * main - print alpha excluding q and e.
 *
 * Return: 0 (Always).
 */
int main(void)
{
    char lower_case;

    for (lower_case = 'a'; lower_case <= 'z' lower_case++)
    {
	    if (lower_case != 'q' && lower_case != 'e')
		    putchar(lower_case);
    }
    putchar('\n');
    return(0);
}
