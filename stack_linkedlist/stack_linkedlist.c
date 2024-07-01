/**
 * Last In First Out (LIFO)
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/**
 * struct node - A node for the stack.
 *
 * @value: The value stored in the node.
 * @next: A pointer to the next node in the stack.
 */
struct node
{
    int value;
    struct node *next;
} *top = NULL;


int main(void)
{
    printf("Before push()\n");
    push(10);
    push(20);
    push(30);

    print_stack();
    pop();
    print_stack();

    printf("Peek = %d\n", peek());

    free_stack();
    top = NULL; // Reset the top pointer after freeing

    return 0;
}

/**
 * is_empty - Checks if the stack is empty.
 *
 * Returns: 1 if the stack is empty, 0 otherwise.
 */
int is_empty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

/**
 * push - Pushes an element onto the stack.
 * @value: The value to be pushed onto the stack.
 */
void push(int value)
{
    struct node *new = malloc(sizeof(struct node));
    if (!new)
    {
        printf("Stack overflow\n");
        exit(1);
    }
    new->value = value;
    new->next = top;
    top = new;
}

/**
 * pop - Pops an element from the stack.
 *
 * Returns: The value of the popped element.
 */
int pop()
{
    struct node *temp = top;

    if (is_empty())
    {
        printf("Stack overflow\n");
        exit(1);
    }
    int value = temp->value;
    top = top->next;
    free(temp);
    temp = NULL;
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
        printf("Stack overflow\n");
        exit(1);
    }
    return top->value;
}

/**
 * print_stack - Prints the elements in the stack.
 */
void print_stack()
{
    struct node *ptr = top;

    if (is_empty())
    {
        printf("Stack overflow\n");
        exit(1);
    }
    printf("Stack elements are:\n");
    while (ptr)
    {
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }
}

/**
 * free_stack - Frees all the memory occupied by the stack nodes.
 */
void free_stack()
{
    while (top)
    {
        struct node *temp = top;
        top = top->next;
        free(temp);
    }
}

