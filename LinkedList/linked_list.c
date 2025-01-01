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
        printf("Element %d \n", ptr->data);

        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head, *second, *third;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;
    second->data = 10;
    second->next = third;
    third->data = 15;
    third->next = NULL;
    traverse(head);
    return 0;
}