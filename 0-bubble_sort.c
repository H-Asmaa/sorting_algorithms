#include "sort.h"

/**
 * bubble_sort - sort the array
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, tmp;

	j = 0;
	i = size;
	if (array == NULL || size < 2)
		return;
	while (i > 0)
	{
		j = 0;
		while (j + 1 < i)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			j++;
		}
		i--;
	}
}
