#include <stddef.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{   
    int data;
    struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h) 
{   
    size_t size = 0;
    const listint_t *current = h;

    while (current != NULL) {
        printf("%d ", current->data);
        size++;
        current = current->next;
    }

    printf("\n");

    return size;
}
