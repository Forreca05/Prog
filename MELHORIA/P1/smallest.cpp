#include "interval.h"

int intervalo(const interval c) {
    return ((c.end.h - c.start.h) * 60 + (c.end.m - c.start.m));
}

interval smallest(const interval a[], int n)  {
    interval b;
    b.start.h = a[0].start.h;
    b.start.m = a[0].start.m;
    b.end.h = a[0].end.h;
    b.end.m = a[0].end.m;
    for (int i = 1; i < n; i++) {
        if (intervalo(a[i]) < intervalo(b)) {
                b.start.h = a[i].start.h;
                b.start.m = a[i].start.m;
                b.end.h = a[i].end.h;
                b.end.m = a[i].end.m;
        }
    }
    return b;
}

int main(){ const int n = 1;
  interval a[n] = {  { { 12, 30 }, { 12, 55 } }  };
  cout << smallest(a, n) << '\n'; }