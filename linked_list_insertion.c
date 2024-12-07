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
        printf("Data %d \n", ptr->data);

        ptr = ptr->next;
    }
}

struct Node *insertAtBegening(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = head;

    return newNode;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    ptr->next = newNode;
    return head;
}

struct Node *insertBetween(struct Node *head, int index, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = head;
    int i = 0;

    while (i != index - 1)
    {
        i++;
        ptr = ptr->next;
    }
    newNode->data = data;
    newNode->next = ptr->next;
    ptr->next = newNode;

    return head;
}
void insertAtNode(struct Node *prevNode, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
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
    third->next = NULL;

    insertBetween(second, 2,1);
    traverse(head);
    return 0;
}