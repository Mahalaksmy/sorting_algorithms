#include "sort.h"
/**
 * selection_sort - This a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: The array of the integer
 * @size: the size of the array
 * Return: Nothing, It is a function void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_elem;

	for (i = 0; i < size - 1; i++)
	{
		min_elem = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_elem])
				min_elem = j;
		}
		swap(&array[min_elem], &array[i]);
		print_array(array, size);

	}
}

/**
*swap - swaps between two elements of an array
*@a: The element a
*@b: The elemewt b
Return: Nothing, It is a function void
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
