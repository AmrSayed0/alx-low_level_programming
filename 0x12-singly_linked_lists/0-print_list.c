#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: The list_t list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	const size_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		if (cursor->str != NULL)
			printf("[%d] %s\n", cursor->len, cursor->str);

		else
			printf("[0] (nil)\n");

		count += 1;
		cursor = cursor->next;
	}

	return (count);
}
