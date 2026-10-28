#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int item)
{
    if (top == SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = item;
        printf("Pushed: %d\n", item);
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        int item = stack[top];
        top--;
        return item;
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack: ");
        for (i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

/* TC3: push, empty the stack completely, then reuse it */
int main()
{
    int item;
    push(5);
    item = pop();
    printf("Popped: %d\n", item);
    display();
    push(7);
    display();
    return 0;
}
