#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ...
 * ascending order using the Bubble sort algorithm.
 * @array: array of integers.
 * @size: size of the array.
 *
 * Return: void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t x = 0, y;
	int tmp;

	if (!array || !size)
	{
		return;
	}
	while (x < size)
	{
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array(array, size);
			}
		}
		x++;
	}
}
