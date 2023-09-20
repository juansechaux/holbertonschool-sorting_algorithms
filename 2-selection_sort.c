#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * @array: array of numbers to sort
 * @size: size of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 1;
	int least, aux, least_index;
	
	if (array == NULL)
		return;

	while (i < size - 1)
	{
		least = array[i];
		while (j < size)
		{
			if (least > array[j])
			{
				least_index = j;
				least = array[j];
			}
			j++;
		}
		if (least_index < (int)size)
		{
			aux = array[i];
			array[i] = least;
			array[least_index] = aux;
			print_array(array, size);
		}
		i++;
		j = i + 1;
	}

}
