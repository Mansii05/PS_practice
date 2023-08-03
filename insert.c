#include <stdlib.h>
#include"node.h"

struct Node* create(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert(struct Node** present, int data)
{
    struct Node* newNode = create(data);
    newNode->next = *present;
    *present = newNode;
}
