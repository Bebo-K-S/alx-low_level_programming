#include "main.h"

/**
 * _abs - A function that returns the absolute of
 * the number
 *
 * @n: The number that will be returned as absolute
 *
 * Return: (n) -> The absolute of the number inputed
*/

int _abs(int n)
{
	if (n < 0)
		n *= (-1);

	return (n);
}
