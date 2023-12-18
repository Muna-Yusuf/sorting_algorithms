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
 * shell_sort - function that sorts an array of integers in ascending
 * order using the Shell sort algorithm, using the Knuth sequence.
 * @array: array of integers.
 * @size: the size of the array.
 *
 * Return: void.
 */
void shell_sort(int *array, size_t size)
{
	size_t tmp, x, y;

	if (!array || size < 2)
	{
		return;
	}

	for (tmp = 1; tmp < (size / 3);)
	{
		tmp = tmp * 3 + 1;
	}
	for (; tmp >= 1; tmp /= 3)
	{
		for (x = tmp; x < size; x++)
		{
			y = x;
			while (y >= tmp && array[y - tmp] > array[y])
			{
				swap(array + y, array + (y - tmp));
				y -= tmp;
			}
		}
		print_array(array, size);
	}
}
