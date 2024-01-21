#ifndef SORT_H
#define SORT_H

#include <stdio.h>

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void selection_sort(int *array, size_t size);
void swap_func(int *array, int idx1, int idx2);
void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
int getMax(int a[], int n);
void countingSort(int a[], int n, int place);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quickSorthelper(int *arr, int start, int end, size_t size);
void quick_sort_hoare(int *arr, int size);


#endif
