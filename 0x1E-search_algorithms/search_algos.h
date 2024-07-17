#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
void print_search_section(int *array, int left, int right);
int binary_search(int *array, size_t size, int value);
int search_block(int *array, int left, int right, int value);
int jump_search(int *array, size_t size, int value);

#endif
