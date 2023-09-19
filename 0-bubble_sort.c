#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * @array: array to sort
 * @size: size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t n, i, temp;

	if (array == NULL)
		return;

	for (n = 0; n < size - 1; n++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
