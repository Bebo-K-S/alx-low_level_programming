#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Description: C program that assigns a random number to n
 * then checks what the last digit of that number is
 * and print different statements accordingly
 *
 * Return: 0 which indicates a success
*/

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	printf("Last digit of %d is %d ", n, last);
	if (last > 5)
		printf("and is greater than 5\n");
	else if (last == 0)
		printf("and is 0\n");
	else if (last < 6 && last != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
