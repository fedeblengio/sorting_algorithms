#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: given array to be sorted
 * @size: array's size
 */
void bubble_sort(int *array, size_t size)
{
        int aux;
	size_t f, j;

	for (f = 0; f < size; f++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
