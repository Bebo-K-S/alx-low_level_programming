#include "main.h"

/**
 * print_to_98 - A function that prints the natrual numbers
 * depending on the input till 98.
 *
 * @n: The number as to which to starting counting from.
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	else
		for (i = n; i < 98; i++)
			printf("%d, ", i);

	printf("98\n");
}
