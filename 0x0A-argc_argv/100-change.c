#include <stdio.h>
#include <stdlib.h>
/**
 * main - print minimum coin to change
 * @argc: num of arguments passed
 * @argv: string array that holds arguments passed
 * Return: 0 if successful and 1 when error
 */
int main(int argc, char *argv[])
{
	int input_num, i, res;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{

		printf("Error\n");

		return (1);

	}

	input_num = atoi(argv[1]);

	res = 0;

	if (input_num < 0)
	{
		printf("0\n");

		return (0);
	}

	for (i = 0; i < 5 && input_num >= 0; i++)
	{
		while (input_num >= coins[i])
		{
			res++;

			input_num -= coins[i];
		}

	}
	printf("%d\n", res);
	return (0);
}
