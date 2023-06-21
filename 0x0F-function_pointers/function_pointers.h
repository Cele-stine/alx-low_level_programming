#ifndef HEADER_FILE
#define HEADER_FILE

#include <stddef.h>
#include <stdlib.h>

int (*get_op_func(char *s))(int, int);
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
#endif
