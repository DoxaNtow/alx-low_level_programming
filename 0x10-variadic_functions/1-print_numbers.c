#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - Prints numbers, followed by a new line.
* @separator: comma separator.
* @n: no. of integers passed to the function.
* @...: A variable number of numbers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int counter;

	va_start(args, n);

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(args, int));


		if (separator != NULL && counter != (n - 1))
			printf("%s", separator);
	}


	printf("\n");


	va_end(args);
}

