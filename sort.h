#ifndef SORT_H
#define SORT_H /* SORT_H  */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Prototypes*/

void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);

void recursive_loop(int *array, int *cpy, size_t size, size_t count);
void nodes_swap(listint_t *nodenext, listint_t *nodeprev);
void swap(int *a, int *b);
void quick_sort(int *array, size_t size);

#endif /* SORT_H  */
