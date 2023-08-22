#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: String to convert.
 *
 * Return: 1 or 0.
 */

int _atoi(char *s)
{
	int l = 0;
	int idx = 0;
	int sii = 0;/*Search for digit*/
	int si = 0;/*check for sign*/
	int n = 0;
	int rs = 0;

	for (; s[l] != '\0'; l++)
	{

	}
	for (idx = 0; idx < l && sii == 0; idx++)
	{
		if (s[idx] == '-')
			++si;
		if (s[idx] >= '0' && s[idx] <= '9')
		{
			n = (s[idx] - '0');
			if (si % 2)
				n = -n;
			rs = rs * 10 + n;
			sii = 1;
			if (s[idx + 1] < '0' || s[idx + 1] > '9')
				break;
			sii = 0;
		}
	}
	if (sii == 0)
		return (0);
	return (rs);
}
