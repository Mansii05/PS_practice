#include <stdio.h>
#include <stdlib.h>
#include"node.h"

void delete(struct Node** present, int i)
{
    struct Node* temp = *present;
    struct Node* previous = NULL;
    if (temp != NULL && i == temp->data) {
        *present = temp->next;
        free(temp);
    } else {
        while (temp != NULL && temp->data != i)
        {
            previous = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            printf("Key not found. \n");
            return;
        }
        previous->next = temp->next;
        free(temp);
    }
}
