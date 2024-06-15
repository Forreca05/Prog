#include <algorithm>

int median(const int a[], int n) {
    int* arr = new int[n];
    int s;
    for (int i = 0; i < n; i++) arr[i] = a[i];
    std::sort(arr, arr+n);
    if (n % 2 != 0) s = arr[n/2];
    else s = (arr[n / 2 - 1] + arr[n / 2]) / 2;
    delete[] arr;
    return s;
}