#include "sort.h"


/**
 * swaping - function swaps nodes in doubly lined list.
 * @a: frist node address.
 * @b: second node address.
 *
 * Return: void.
 */

void swaping(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}

/**
 * insertion_sort_list - function that sorts a doubly linked list of...
 * integers in ascending order using the Insertion sort algorithm.
 * @list: doubly linked list.
 *
 * Return: void.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *x, *y;

	if (!list || !*list || !(*list)->next)
		return;
	x = (*list)->next;
	while (x)
	{
		y = x;
		x = x->next;
		while (y && y->prev)
		{
			if (y->prev->n > y->n)
			{
				swaping(y->prev, y);
				if (!y->prev)
				{
					*list = y;
				}
				print_list((const listint_t *)*list);
			}
			else
				y = y->prev;
		}
	}
}
