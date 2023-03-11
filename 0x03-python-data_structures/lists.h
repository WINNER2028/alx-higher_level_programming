#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * PROJECT BY OBI CHEMERIE
 * Description: singly linked list node structure
 * for ALX project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
size_t listint_len(const listint_t *h);
int is_palindrome(listint_t **head);

#endif
