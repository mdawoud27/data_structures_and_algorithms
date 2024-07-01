#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

/**
 * is_empty - Checks if the queue is empty.
 *
 * Return: 1 if the queue is empty, 0 otherwise.
 */
int is_empty(void)
{
    return front == -1;
}

/**
 * is_full - Checks if the queue is full.
 *
 * Return: 1 if the queue is full, 0 otherwise.
 */
int is_full(void)
{
    return rear == SIZE - 1;
}

/**
 * peek - Returns the value at the front of the queue.
 *
 * Return: The value at the front of the queue.
 */
int peek(void)
{
    if (is_empty())
    {
        printf("Queue is empty\n");
        exit(1);
    }
    return queue[front];
}

/**
 * en_queue - Adds an element to the rear of the queue.
 * @value: The value to be enqueued.
 */
void en_queue(int value)
{
    if (is_full())
    {
        printf("Queue is full\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;
}

/**
 * de_queue - Removes the front element from the queue.
 */
void de_queue(void)
{
    if (is_empty())
    {
        printf("Queue is empty\n");
        return;
    }

    front++;
    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
}

/**
 * front_value - Returns the value at the front of the queue.
 *
 * Return: The value at the front of the queue.
 */
int front_value(void)
{
    if (is_empty())
    {
        printf("Queue is empty\n");
        exit(1);
    }
    return queue[front];
}

/**
 * rear_value - Returns the value at the rear of the queue.
 *
 * Return: The value at the rear of the queue.
 */
int rear_value(void)
{
    if (is_empty())
    {
        printf("Queue is empty\n");
        exit(1);
    }
    return queue[rear];
}

/**
 * print_queue - Prints the elements in the queue.
 */
void print_queue(void)
{
    if (is_empty())
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are:\n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d\n", queue[i]);
    }
}

int main(void)
{
    de_queue();
    en_queue(1);
    en_queue(2);
    en_queue(3);
    en_queue(4);

    printf("Queue after enqueuing:\n");
    print_queue();

    de_queue();
    printf("Queue after dequeuing:\n");
    print_queue();
    return 0;
}

