#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

int is_full();
int is_empty();
void push(int data);
int pop();
int peek();
void print_stack();

#endif

