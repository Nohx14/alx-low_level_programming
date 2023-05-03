#include "lists.h"

/**
 * print_listint - this comment is
 * meant to  prints all the elements of a linked list
 * @h: This is the linked list of type listint_t to print
 *
 * Return: number of nodes is returned.
 */
size_t print_listint(const listint_t *h)
{
	size_t num =  0;


	while (h)
	{
		printf("%d\n", h->n);

		num++;
		h = h->next;
	}

	return (num);
}
