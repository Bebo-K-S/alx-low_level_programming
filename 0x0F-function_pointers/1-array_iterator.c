#include "function_pointers.c"

/**
 * array_iterator - A function that executes a function given as a
 *                  parameter on each element of an array.
 *
 * @array: Is a pointer array.
 * @size: is the size of the array.
 * @action: Is a pointer to the function you need to use.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
