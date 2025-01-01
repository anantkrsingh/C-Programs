#include <stdio.h>
#include <stdlib.h>

struct Node
{

    int data;

    struct Node *next;

    struct Node *prev;
};

struct Node *insertAtStart(struct Node *head, int data)
{

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = head;
    newNode->prev = NULL;

    return newNode;
}
void insertAt(struct Node *head, int index, int data)
{

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    int i = 0;
    while (i != index - 1)
    {
        i++;
        head = head->next;
    }

    newNode->prev = head;
    newNode->next = head->next;
    newNode->data = data;
    head->next = newNode;

}

void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf(" %d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{

    struct Node *head, *second, *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->prev = NULL;
    head->data = 10;
    head->next = second;

    second->prev = head;
    second->data = 20;
    second->next = third;

    third->prev = second;
    third->data = 30;
    third->next = NULL;

    printList(head);

    insertAt(head, 1, 100);
    printList(head);

    return 0;
}
