#ifndef CALC_H
#define CALC_H

/**
 * struct op - A struct op.
 * @op: operator
 * @f: associated function
 */

typedef struct op
{
	char *op;
	int (*f)(int x, int y);
} op_t;

int op_add(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);
int (*get_op_func(char *s))(int, int);
#endif
