#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the linked list
 * @str: string to be added to the linked list
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    if (!head || !str)
        return (NULL);

    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return (NULL);

    new_node->str = strdup(str);
    if (!new_node->str)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = strlen(str);
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}
