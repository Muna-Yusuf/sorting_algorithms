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
 * partition_arr - function that divides the array.
 * @array: array of integers.
 * @size: the size of the array.
 * @low: index.
 * @high: index.
 *
 * Return: size_t.
 */
int partition_arr(int *array, size_t size, int low, int high)
{
	int x, *pivot, y;

	pivot = array + high;
	for (x = y = low; y < high; y++)
	{
		if (array[y] < *pivot)
		{
			if (x < y)
			{
				swap(array + y, array + x);
				print_array(array, size);
			}
			x++;
		}
	}

	if (array[x] > *pivot)
	{
		swap(array + x, pivot);
		print_array(array, size);
	}
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

void sorting(int *array, size_t size, int low, int high)
{
	int x;

	if (high - low > 0)
	{
		x = partition_arr(array, size, low, high);
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
	if (!array || size < 2)
		return;
	sorting(array, size, 0, size - 1);
}
