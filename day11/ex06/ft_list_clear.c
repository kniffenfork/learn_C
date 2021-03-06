#include "../ft_list.h"

void            ft_list_clear(t_list **head)
{
    t_list *prev = NULL;
    while ((*head)->next)
    {
        prev = *head;
        *head = (*head)->next;
        free(prev);
    }
    free(*head);
}