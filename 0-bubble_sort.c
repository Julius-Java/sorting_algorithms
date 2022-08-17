#include "sort.h"

/**
 *bubble_sort - sorts the elements in an unsorted array in ascending order
 *@array: unsorted array
 *@size: size of the array
 *Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t arr_count;
	size_t passes;
	size_t temp;

	if (size > 1)
	{
		for (arr_count = 0; arr_count < size; arr_count++)
		{
			for (passes = 0; passes < (size - 1 - arr_count); passes++)
			{
				if (array[passes] > array[passes + 1])
				{
					temp = array[passes];
					array[passes] = array[passes + 1];
					array[passes + 1] = temp;
					print_array(array, size);
				}
			}
		}
	}
}
