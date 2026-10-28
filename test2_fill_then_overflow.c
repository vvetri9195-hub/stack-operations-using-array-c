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

/* TC2: fill the stack exactly to capacity, then push one more */
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    display();
    return 0;
}
