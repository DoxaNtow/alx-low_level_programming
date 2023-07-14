#include <stdio.h>
/**
 * main - A program that prints the last digit
 *Return: 0
 */
int main(void)
{
	int num = 0;
	int letter = 'a';

	while (num < 10)
	{
		putchar(num + 48);
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

