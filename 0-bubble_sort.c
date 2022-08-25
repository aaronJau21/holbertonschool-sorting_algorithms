#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @size: size
 * @array: pointer
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, index, tmp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
		for (index = 0; index < size - 1; index++)
		{
			if (array[index] > array[index + 1] && array[index + 1])
			{
				tmp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = tmp;
				print_array(array, size);
			}
		}
}
