#include <stdio.h>
/**
 * main - A program that prints base 10 in char
 *Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + 48);
		putchar(44);
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}

