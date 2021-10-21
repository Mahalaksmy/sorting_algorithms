#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Entry point
 *
 * Return: Always void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int *cpy = malloc(size * sizeof(int));
	(void)array, (void)size;
	// printf("%ls", array);
	// printf("%li", size);

	for (i = 0; i < size; i++)
		cpy[i] = array[i];

	// printf("cpy: ");
	// print_array(cpy, size);

	for (i = 0; i < size; i++)
	{
		if (array[i] > array[i + 1])
		{
			// printf("cpy[i]: %i -- cpy[i + 1]: %i\n",  cpy[i], cpy[i + 1]);
			cpy[i] = array[i + 1];
			cpy[i + 1] = array[i];
			// printf("cpy[i]: %i -- cpy[i + 1]: %i\n",  cpy[i], cpy[i + 1]);

			array[i] = cpy[i];
			array[i + 1] = cpy[i + 1];			

			// print_array(array, size);
			print_array(cpy, size);
			printf("\n");

			// for (j = 0; j < size; j++)
			// 	array[j] = cpy[j];
		}
	}
	
}
