#include "lists.h"
/**
 * free_listint - free alinked list
 * @head: listint to be freed
 */
void free_listint(listint_t *head)
{
  listint_t *temp;
  
  while (head)
  {
    temp = head->next;
    free(head);
    head = temp;
  }
}
