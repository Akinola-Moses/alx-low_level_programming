#include "3-calc.h"

/**
 * get_op_func - Will select the function to perfor.
 * base on the request of the users.
 * @s: The operators.
 *
 * Return: A pointer to the function base on the operator.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op == *s))
		{
			return (ops[i].f);
		}
	}
}
