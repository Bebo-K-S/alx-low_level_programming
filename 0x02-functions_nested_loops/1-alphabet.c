#include "main.h"

/**
 * print_alphabet - A function that utilizes putchar()
 * to print the alphabet.
*/

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	putchar('\n');
}
