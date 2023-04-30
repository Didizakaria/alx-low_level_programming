#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *tmp, *safe;

	if (h == NULL)
		return (0);

	safe = *h;
	while (safe != NULL)
	{
		size++;
		tmp = safe;
		safe = safe->next;
		free(tmp);
		if (tmp <= safe)
			break;
	}

	*h = NULL;
	return (size);
}
