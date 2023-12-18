#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;



/*Printing Functions*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*Functions*/
/*0. Bubble sort */
void bubble_sort(int *array, size_t size);
/*1. Insertion sort */
void insertion_sort_list(listint_t **list);
void swaping(listint_t *a, listint_t *b);
/*2. Selection sort */
void selection_sort(int *array, size_t size);
void swap(int *a, int *b);
/*3. Quick sort */
void quick_sort(int *array, size_t size);
void swap(int *a, int *b);
int partition_arr(int *array, size_t size, int low, int high);
void sorting(int *array, size_t size, int low, int high);
/*4. Shell sort - Knuth Sequence */
void shell_sort(int *array, size_t size);

/*6. Counting sort*/
int _max(int *array, int size);
void counting_sort(int *array, size_t size);

#endif
