#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that that adds positive numbers.
 *
 * @argc: The number of arguments.
 * @argv: Array of pointers to arguments.
 *
 * Return: 0 which indicates a success otherwise 1.
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);
	return (0);
}
