#include "sort.h"

void selection_sort(int *array, int len)
{
	int tmp, index;
    int i, j;
	for ( i = 0; i < len; i++)
	{
		index = i;
		for ( j = i + 1; j < len; j++)
		{
			if (array[index] > array[j])
				index = j;
		}
		if (index != i)
		{
			tmp = array[i];
			array[i] = array[index];
			array[index] = tmp;
			print_array(array, len);
		}
	}
}
