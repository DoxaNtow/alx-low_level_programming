#include "main.h"

/**
 * _abs - Computes the absolute value og an integer.
 * @num: The number to be computed.
 * Return: Absolute value of number or zero
 */
int _abs(int num)
{
	if (num < 0)
	{
		int abs_num;

		abs_num = num * -1;
		return (abs_num);
	}
		return (num);
}
