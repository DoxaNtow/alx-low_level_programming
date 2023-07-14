#include <stdio.h>
/**
 * main - A program that prints the last digit
 *Return: 0
 */
int main(void)
{
	char letter = 'a';
	char upper = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');
	return (0);
}
