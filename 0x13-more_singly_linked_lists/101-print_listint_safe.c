#include "lists.h"
#include <stddef.h>

/**
 * print_listint_safe - Prints all the elements of a listint_t list
 * @head: Pointer to the head node of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *temp = NULL;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *) current, current->n);

		if (current > current->next || temp > current->next)
		{
			printf("-> [%p] %d\n", (void *) current->next, current->next->n);
			break;
		}

		temp = current;
		current = current->next;
	}

	return (count);
}
