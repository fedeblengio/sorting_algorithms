#include "holberton.h"

/**
 * selection_sort - Its a function that sorts an array of integers
 *in ascending order
 * @array: the array to be sorted
 * @size: number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	int aux;
	int boolean = 0;
	size_t i, m_i , f;

	if (!size)
		return;

	for (f = 0; f < size; f++)
	{
		boolean = 0;
		m_i = f;
		for (i = f + 1; i < size; i++)
		{
			if (array[i] < array[m_i])
			{
				boolean = 1;
				m_i = i;
			}
		}
		if (boolean)
		{
			aux = array[f];
			array[f] = array[m_i];
			array[m_i] = aux;
			print_array(array, size);
		}
	}
}
