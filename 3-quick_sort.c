#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * quick_sort - Function to quick sort a array of intrgers.
 *
 * @array: Is the array to organize.
 * @size: Is the size of the array.
 * Return: Always void.
 */
void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = size - 1;

	recursive_quick(array, low, high, size);
}

/**
 * recursive_quick - Function to quick sort a array of intrgers.
 *
 * @arr: Is the array to organize.
 * @size: Is the size of the array.
 * @low: Is the less index of array (0).
 * @high: Is the greater index of array (size - 1).
 * Return: Always void.
 */
void recursive_quick(int arr[], int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(arr, low, high, size);

		recursive_quick(arr, low, pivot - 1, size);
		recursive_quick(arr, pivot + 1, high, size);
	}
}

/**
 * partition - Function to quick sort a array of intrgers.
 *
 * @arr: Is the array to organize.
 * @size: Is the size of the array.
 * @low: Is the less index of array (0).
 * @high: Is the greater index of array (size - 1).
 * Return: A int that is the pivot.
 */
int partition(int arr[], int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = low, j;

	for (j = low; j < high; j++)
	{
		if (arr[j] <= pivot)
		{
			if (i != j)
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		swap(&arr[i], &arr[high]);
		print_array(arr, size);
	}

	return (i);
}

/**
* swap - swaps between two elements of an array
* @a: The element a
* @b: The elemewt b
* Return: Always void
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
