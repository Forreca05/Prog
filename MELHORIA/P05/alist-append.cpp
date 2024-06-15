#include "alist.h"

void append(alist* a, const alist* b) {
    int* arr = new int[a->size + b->size];
    int s = 0;
    for (int i = 0; i < a->size; i++) {
        arr[i] = a->elements[i];
        s++;
    }
    for (int i = 0; i < b->size; i++) {
        arr[s] = b->elements[i];
        s++;
    }
    delete[] a->elements;
    a->elements = arr;
    a->size += b->size;
}