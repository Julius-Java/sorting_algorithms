#include "sort.h"

/**
 *bubble_sort - sorts the elements in an unsorted array in ascending order
 *@array: unsorted array
 *@size: size of the array
 *Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int arr_count;
	int passes;

	for (arr_count = 0; arr_count < size; arr_count++)
	{
		for (passes = 0; passes < (size - 1 - arr_count); arr_count++)
		{
			if (array[passes] > arr[passes + 1])
			{
				temp = array[passes];
				array[passes + 1] = array[passes];
				array[passes] = temp;
				print_list(array, size);
			}
		}
	}
}
