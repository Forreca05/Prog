int max(const int a[], int n) {
    int b = a[0];
    for (int i = 1; i < n; i++) if (a[i] > b) b = a[i];
    return b;
}