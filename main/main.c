#include <stdio.h>
#include "node.h"
int main()
{
    struct Node* listHead = NULL;
    insert(&listHead, 1);
    insert(&listHead, 2);
    insert(&listHead, 3);
    insert(&listHead, 4);
    printList(listHead);
    delete(&listHead, 2);
    printList(listHead);
    return 0;
}
