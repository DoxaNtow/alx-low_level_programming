#include "main.h"
/**
 * swap_int - finction that takes two integers and swaps them
 * @a: first number
 * @b: second number
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
