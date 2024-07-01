#include "linked_list.h"

int is_list_circular(node *head)
{
    node *fast, *slow;
    fast = slow = head;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1;
    }
    return 0;
}
