#include "print_array.h"

int filter_unique(const int arr[], int size, int out[]) {
    int a = 0, s = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                if (i != j) a = 1;
            }
        }
        if (a == 0) out[s++] = arr[i];
        a = 0;
    }
    return s;
}

int main() { const int size =  1;
  int arr[size] = { 123 };
  int out[size] = { 0 };
  int r = filter_unique(arr, size, out); 
  print_array(out, r); }