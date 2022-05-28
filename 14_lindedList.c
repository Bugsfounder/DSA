#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
    struct Node *fifth;

    head = (struct Node *)(malloc(sizeof(struct Node)));
    second = (struct Node *)(malloc(sizeof(struct Node)));
    third = (struct Node *)(malloc(sizeof(struct Node)));
    forth = (struct Node *)(malloc(sizeof(struct Node)));
    fifth = (struct Node *)(malloc(sizeof(struct Node)));

    head->data = 55;
    head->next = second;

    second->data = 45;
    second->next = third;

    third->data = 23;
    third->next = forth;

    forth->data = 98;
    forth->next = fifth;

    fifth->data = 23;
    fifth->next = NULL;

    traverse(head);
    return 0;
}