#include "lists.h"

/**
 * check_cycle - checks if the list is cycle
 * @lists: variable
 * Return: int
 */

int check_cycle(listint_t *list)
{
	listint_t *turtle = list, *hare = list;

	while (turtle != NULL && hare != NULL & hare->next != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;
		if (hare == turtle)
		return (1);
	}
	return (0);
}
