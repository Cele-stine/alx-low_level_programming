#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/**
	 * write your line of code here...
	 * Remember:
	 * -you are not allowed to use a
	 *  -you are not allowed to midify p
	 *  -onli one statment
	 *  -you are not allowed to coder anything else than this line of code
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
