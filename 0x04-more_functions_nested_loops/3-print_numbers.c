#include "main.h"

/**
 * print_numbers - A function that prints the numbers from
 *                 0 to 9 using _putchar
*/

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);
	_putchar('\n');
}
