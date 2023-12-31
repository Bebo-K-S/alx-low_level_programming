#include "main.h"

/**
 * print_sign - Function that checks whether the number
 * is +ve, -ve or zero.
 *
 * @n: The number to be checked on.
 *
 * Return: (1) -> If it's +ve
 * (0) -> If it's a zero
 * (-1) -> If it's -ve
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar(45);
	return (-1);
}
