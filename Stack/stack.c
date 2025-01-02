#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}
void push(int value, struct stack *ptr)
{
    if (!isFull(ptr))
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
    else
        printf("Stack overflow");
}
int pop(struct stack *ptr)
{
    if (!isEmpty(ptr))
    {
        int temp = ptr->arr[ptr->top];
        ptr->top--;
        return temp;
    }
    else
    {
        printf("Stack underflow");
        return 0;
    }
}
int peek(struct stack *ptr, int i)
{
    int arrayEnd = ptr->top - i + 1 ;
    if (arrayEnd < 0)
    {
        printf("Not a valid poision");
        return -1;
    }
    else
    {
        return ptr->arr[arrayEnd];

    }
}
int main()
{
    // struct stack s;

    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size * sizeof(int));

    struct stack *s = (struct stack *)malloc(sizeof(struct stack));

    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(5, s);
    printf("%d \n",peek(s,1));
    pop(s);

    if (isEmpty(s))
        printf("Stack is Empty");
    else
        printf("Stack is not empty");

    return 0;
}