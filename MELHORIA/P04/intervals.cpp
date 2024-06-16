#include "interval.h"

bool pertence(time_of_day t, interval s) {
    if (t.h < s.end.h && t.h > s.start.h) return true;
    else if (t.h == s.end.h && t.m < s.end.m) return true;
    else if (t.h == s.start.h && t.m >= s.start.m) return true;
    else return false;
}

int search_intervals(time_of_day t, const interval a[], int n, interval& u) {
    u.start = t, u.end = t;
    for (int i = 0; i < n; i++) {
        if (pertence(t, a[i])) {
            if (a[i].start.h < u.start.h) u.start = a[i].start;
            else if (a[i].start.h == u.start.h && a[i].start.m < u.start.m) u.start = a[i].start;
            if (a[i].end.h > u.end.h) u.end = a[i].end;
            else if (a[i].end.h == u.end.h && a[i].end.m < u.end.m) u.end = a[i].end;
        }
    }
    return (u.end.h - u.start.h) * 60 + (u.end.m - u.start.m);
}