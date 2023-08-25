// Last In First Out (LIFO)

#include <stdio.h>
#include "stack.h"
#define MAX 5

int stack_arr[MAX];
int top = -1;

int main(void)
{
    printf("Before pop()\n");
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    print_stack();
    printf("\nAfter pop()\n");
    int p = pop();
    printf("You deleted %d\n", p);
    p = pop();
    printf("You deleted %d\n", p);
    p = pop();
    printf("You deleted %d\n", p);
    print_stack();

    return 0;
}

/**
 * is_full - Checks if the stack is full.
 *
 * Returns: 1 if the stack is full, 0 otherwise.
 */
int is_full()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

/**
 * is_empty - Checks if the stack is empty.
 *
 * Returns: 1 if the stack is empty, 0 otherwise.
 */
int is_empty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

/**
 * push - Pushes an element onto the stack.
 * @data: The data to be pushed onto the stack.
 */
void push(int data)
{
    if (is_full())
    {
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack_arr[top] = data;
}

/**
 * pop - Pops an element from the stack.
 *
 * Returns: The value of the popped element.
 */
int pop()
{
    if (is_empty())
    {
        printf("Stack is underflow\n");
        exit(1);
    }
    int value = stack_arr[top];
    top--;
    return value;
}

/**
 * peek - Returns the value of the top element without removing it.
 *
 * Returns: The value of the top element.
 */
int peek()
{
    if (is_empty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack_arr[top];
}

/**
 * print_stack - Prints the elements in the stack.
 */
void print_stack()
{
    if (is_empty())
    {
        printf("Stack is underflow\n");
        return;
    }
    for (int i = top; i >= 0; i--)
        printf("%d\n", stack_arr[i]);
}

