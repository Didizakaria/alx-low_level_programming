#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;
	size_t count = 0;

	while (hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
		tortoise = tortoise->next;
		hare = hare->next->next;

		/* Check for cycle */
		if (tortoise == hare)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			count++;
			break;
		}
	}

	/* No cycle found, print remaining nodes */
	if (hare == NULL || hare->next == NULL)
	{
		while (tortoise != NULL)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			count++;
			tortoise = tortoise->next;
		}
	}

	/* Check if function failed */
	if (count == 0)
	{
		exit(98);
	}

	return (count);
}
