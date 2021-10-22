#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Function that sorts an array
 * of integers in ascending order using the Burble Sort
 *
 * @array: The array to integer
 * @size: size of the array
 * Return: It is a Void Function
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, temp;

	if (array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
				}
			}
		}
	}

}
