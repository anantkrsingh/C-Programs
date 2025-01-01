#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverse(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element %d \n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *insertAtFirst(struct Node *head, int data)
{

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;

    struct Node *ptr = head;

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

    ptr->next = newNode;
    newNode->next = head;

    return newNode;
}

int main()
{

    struct Node *head, *second, *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));

    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 10;
    third->next = head;

    head = insertAtFirst(head, 1);

    traverse(head);
    return 0;
}
