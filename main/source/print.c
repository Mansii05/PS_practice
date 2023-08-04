#include <stdio.h>

#include"node.h"

 

void printList(struct Node* presentHead)
{
    struct Node* temp = presentHead;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
