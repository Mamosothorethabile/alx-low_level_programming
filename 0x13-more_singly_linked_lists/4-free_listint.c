#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_t
{
	int data;
	struct listint_t *next;
} listint_t;
void free_listint(listint_t *head)
{
	listint_t *current = head;
        listint_t *next;
	{
		next = current->next;
		free(current);
		current = next;
	}
}
