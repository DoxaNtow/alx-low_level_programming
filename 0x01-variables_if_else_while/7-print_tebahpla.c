#include <stdio.h>
/**
 * main - A program that prints the last digit
 *Return: 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}

