#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all - Function that returns the sum of all its parameters.
* @n: no. of paramters passed to the function.
* @...: A variable number of paramters to calculate the sum of.
* Return: 0, If n == 0 else return the the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int x, sum = 0;


	va_start(list, n);


	for (x = 0; x < n; x++)
		sum = sum + va_arg(list, int);


	va_end(list);


	return (sum);
}

