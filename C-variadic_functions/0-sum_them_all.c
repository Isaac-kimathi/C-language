#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: the number of parameters passed to the function
 * @...: a variable number of parameters to calculate the sum of
 *
 * Retun: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

