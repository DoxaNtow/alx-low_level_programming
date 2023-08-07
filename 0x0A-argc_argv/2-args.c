#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives from argv
 * @argc: number of arguments
 * @argv: array of string arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}

