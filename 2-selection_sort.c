#include "sort.h"
/**
 * swap - function swapping integers in array.
 * @a: int.
 * @b: int.
 *
 * Return: void.
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * selection_sort - function that sorts an array of integers in...
 * ascending order using the Selection sort algorithm.
 * @array: array of integers.
 * @size: the size of the array.
 *
 * Return: void.
 */
void selection_sort(int *array, size_t size)
{
	int *tmp;
	size_t x, y;

	if (!array || !size)
	{
		return;
	}

	for (x = 0; x < size - 1; x++)
	{
		tmp = array + x;
		for (y = x + 1; y < size; y++)
			tmp = (array[y] < *tmp) ? (array + y) : tmp;

		if ((array + x) != tmp)
		{
			swap(array + x, tmp);
			print_array(array, size);
		}
	}
}
