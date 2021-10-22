#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * recursive_loop - Entry point
 *
 * Return: Always void
 */
void recursive_loop(int *array, int *cpy, size_t size, size_t count)
{
	size_t i;
	count++;

	if (count == size)
		return;
	
	for (i = 0; i < size; i++)
	{
		if (array[i] > array[i + 1])
		{
			cpy[i] = array[i + 1];
			cpy[i + 1] = array[i];

			array[i] = cpy[i];
			array[i + 1] = cpy[i + 1];			

			print_array(cpy, size);
			printf("\n");
		}
	}
	// printf("count: %li -- size: %li\n", count, size);
	recursive_loop(array, cpy, size, count);
}

/**
 * bubble_sort - Entry point
 *
 * Return: Always void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, count = 0;
	int *cpy = malloc(size * sizeof(int));
	(void)array, (void)size;

	for (i = 0; i < size; i++)
		cpy[i] = array[i];

	recursive_loop(array, cpy, size, count);
}





// printf("%ls", array);
// printf("%li", size);

// printf("cpy: ");
// print_array(cpy, size);

// for (i = 0; i < size; i++)
// {
// 	if (array[i] > array[i + 1])
// 	{
// 		// printf("cpy[i]: %i -- cpy[i + 1]: %i\n",  cpy[i], cpy[i + 1]);
// 		cpy[i] = array[i + 1];
// 		cpy[i + 1] = array[i];
// 		// printf("cpy[i]: %i -- cpy[i + 1]: %i\n",  cpy[i], cpy[i + 1]);

// 		array[i] = cpy[i];
// 		array[i + 1] = cpy[i + 1];			

// 		// print_array(array, size);
// 		print_array(cpy, size);
// 		printf("\n");

// 		// for (j = 0; j < size; j++)
// 		// 	array[j] = cpy[j];
// 	}
// }
