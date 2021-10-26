#include "sort.h"

/**
 * selection_sort - This a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: The array of the integer
 * @size: the size of the array
 * Return: Zero
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, x = 0;
	int min_elem;

	if (array == NULL || size < 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		if (sorted_array(array, size) == 1)
			break;

		min_elem = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_elem])
			{
				min_elem = j;
				x = 1;
			}
		}
		swap(&array[i],&array[min_elem]);
		
		if ( x == 1)
			print_array(array, size);
		x = 0;
	}
}

/**
*swap - swaps between two elements of an array
*@a: The element a
*@b: The elemewt b
*Return: Nothing, It is a function void
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * sorted_array - checks if the array is sorted
 * @array: the array
 * @size: the size of the array
 *
 * Return: Returns 1 if array is sorted, 0 if array is unsorted
 */
int sorted_array(int *array, size_t size)
{
	int i;

	for (i = 0; i < (int) size - 1; i += 1)
	{
		if (array[i] > array[i + 1])
			return (0);
	}

	return (1);
}
