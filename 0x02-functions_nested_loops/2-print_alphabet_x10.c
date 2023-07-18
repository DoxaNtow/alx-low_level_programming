#include "main.h"

/**
 * print_alphabet_x10 - Make the alphabet x10 times
 *Return: void
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		i++;
		letter = 'a';
		_putchar('\n');
	}

}
