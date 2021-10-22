#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * recursive_loop - Function that repit a for until
 * that the counter to be equal to the size of the array.
 *
 * @array: Is the array to organize.
 * @cpy: Is a copy of the array.
 * @size: Is the size of the array.
 * @count: Is the counter to compare.
 * Return: Always void.
 */
void recursive_loop(int *array, int *cpy, size_t size, size_t count)
{
	size_t i;

	count++;
	if (count == size)
		return;

	for (i = 0; i < size; i++)
	{
		if (array[i] > array[i + 1] && i + 1 < size)
		{
			cpy[i] = array[i + 1];
			cpy[i + 1] = array[i];

			array[i] = cpy[i];
			array[i + 1] = cpy[i + 1];

			print_array(cpy, size);
		}
	}
	recursive_loop(array, cpy, size, count);
}

/**
 * bubble_sort - Funtion to order a array to integers.
 *
 * @array: Is the array to organize.
 * @size: Is the size of the array.
 * Return: Always void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, count = 0;
	int *cpy = malloc(size * sizeof(int));

	for (i = 0; i < size; i++)
		cpy[i] = array[i];

	recursive_loop(array, cpy, size, count);
	free(cpy);
}
