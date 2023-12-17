#include "sort.h"

/**
 * swap_arr - function swaps values.
 * @array: array of integers.
 * @size: the size of the array.
 * @a: first value address.
 * @b: second value address.
 *
 * Return: void.
 */

void swap_arr(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}

/**
 * partition_arr - function that divides the array.
 * @array: array of integers.
 * @size: the size of the array.
 * @low: index.
 * @high: index.
 *
 * Return: size_t.
 */

size_t partition_arr(int *array, size_t size, int low, int high)
{
	int x, pivot, y;

	pivot = array[high];
	for (x = y = low; y < high; y++)
	{
		if (array[y] < pivot)
		{
			swap_arr(array, size, &array[y], &array[x++]);
		}
	}
	swap_arr(array, size, &array[x], &array[high]);
	return (x);
}

/**
 * sorting - function to sort.
 * @array: array of integers.
 * @size: the size of the array.
 * @low: index.
 * @high: index.
 *
 * Return: size_t.
 */

void sorting(int *array, size_t size, size_t low, size_t high)
{
	if (low < high)
	{
		size_t x = partition_arr(array, size, low, high);

		sorting(array, size, low, x - 1);
		sorting(array, size, x + 1, high);
	}
}

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm.
 * @array: array of integers.
 * @size: the size of the array.
 *
 * Return: void.
 */

void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	sorting(array, size, 0, size - 1);
}
