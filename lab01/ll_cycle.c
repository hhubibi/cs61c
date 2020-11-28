#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node *slow, *fast;
    int loop;

    slow = fast = head;
    loop = 0;

    while (slow != NULL && fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            loop = 1;
            break;
        }
    }
    
    return loop;
}