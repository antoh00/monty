#include "monty.h"

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *now = *stack;
    
    while (now != NULL)
    {
        printf("%d\n",now->n);
        now = now->next;

    }
    (void)line_number;
}


void push(stack_t **stack, unsigned int line_number){
    
    stack_t *new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        printf("Memory allocation error\n");
        exit(EXIT_FAILURE);
    }
    
    new->n = line_number;
    new->prev = NULL;

    if (*stack != NULL)
    {
        new->next = *stack;
        (*stack)->prev = new;
    }
    *stack = new;
}