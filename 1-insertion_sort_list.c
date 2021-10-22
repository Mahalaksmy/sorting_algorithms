#include "sort.h"
/**
 * insertion_sort_list - This a function that
 * sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: The list how arguments
 *
 * Return: Nothings, It is a function void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp1, *temp2;
	int new_p;

	if (list == NULL || *list == NULL)
		return;

	for (temp1 = (*list)->next; temp1 != NULL; temp1 = temp1->next)
	{
		new_p = temp1->n;
		for (temp2 = temp1->prev; temp2 != NULL; temp2 = temp2->prev)
		{
			if (new_p < temp2->n)
			{
				nodes_swap(temp2, temp1);

				if (temp2->prev == NULL)
					*list = temp2;
				else if (temp1->prev == NULL)
					*list = temp1;
				print_list(*list);

			}
		}
	}
}
/**
 * nodes_swap - This a function that swap the nodes themselves.
 * @nodenext: The next node
 * @nodeprev: The prev node
 *
 * Return: Nothings, It is a function void
 */
void nodes_swap(listint_t *nodenext, listint_t *nodeprev)
{
	nodenext->next = nodeprev->next;
	nodeprev->next = nodenext;
	nodeprev->prev = nodenext->prev;
	nodenext->prev = nodeprev;

	if (nodeprev->prev != NULL)
		nodeprev->prev->next = nodeprev;
	if (nodenext->next != NULL)
		nodenext->next->prev = nodenext;
}
