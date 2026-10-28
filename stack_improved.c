#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

int isEmpty(void) { return top == -1; }
int isFull(void)  { return top == SIZE - 1; }

/* returns 1 on success, 0 on overflow */
int push(int item)
{
    if (isFull())
    {
        printf("Stack Overflow\n");
        return 0;
    }
    stack[++top] = item;
    printf("Pushed: %d\n", item);
    return 1;
}

/* returns 1 on success (value stored in *item), 0 on underflow */
int pop(int *item)
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        return 0;
    }
    *item = stack[top--];
    return 1;
}

void display(void)
{
    int i;
    if (isEmpty())
    {
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack:");
    for (i = 0; i <= top; i++)
        printf(" %d", stack[i]);      /* no trailing space */
    printf("\n");
}

int main(void)
{
    int item;

    push(-1);                         /* the value that broke the original */
    if (pop(&item)) printf("Popped: %d\n", item);   /* valid pop of -1 */
    if (pop(&item)) printf("Popped: %d\n", item);   /* underflow: nothing printed */

    push(10); push(20); push(30);
    display();
    if (pop(&item)) printf("Popped: %d\n", item);
    push(40); push(50); push(60); push(70);
    display();
    while (pop(&item)) printf("Popped: %d\n", item);
    display();
    return 0;
}
