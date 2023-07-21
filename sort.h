#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdbool.h>

typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void swap(int *a, int *b);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);


#endif
