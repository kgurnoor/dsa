#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)

    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
};

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    linkedlisttraversal(head);
    printf("\n");
    head=deleteFirst(head);
    linkedlisttraversal(head);
    return 0;
}