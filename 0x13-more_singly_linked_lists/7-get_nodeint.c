#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 * @head: head of the list
 * @index: is the index of the node, starting at 0
 *
 * Return: NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t n;

for (n = 0; (n < index) && (head->next); n++)
head = head->next;

if (n < index)
return (NULL);

return (head);
}
