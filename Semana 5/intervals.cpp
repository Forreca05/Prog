#ifndef INTERVALS_H
#define INTERVALS_H


struct time_of_day {
    unsigned char h; // Hours [0,23]
    unsigned char m; // Minutes [0,59]
};

struct interval {
    time_of_day start; // Start time
    time_of_day end;   // End time
};


#include <iostream>
using namespace std;

bool lessthan(time_of_day t1, time_of_day t2) {
    return (t1.h < t2.h) || (t1.h == t2.h && t1.m < t2.m);
}

bool bigeqthan(time_of_day t1, time_of_day t2) {
    return (t1.h > t2.h) || (t1.h == t2.h && t1.m >= t2.m);
}

int sum(time_of_day t1, time_of_day t2) {
    int m2 = t2.h*60+t2.m;
    int m1 = t1.h*60+t1.m;
    return m2-m1;
}

int search_intervals(time_of_day t, const interval a[], int n, interval& u) {
    u = {t, t}; // Initialize u with the target time t
    int d = 0;
    for (int i = 0; i < n; i++) {
        if (lessthan(t, a[i].end) && bigeqthan(t, a[i].start)) {
            if (lessthan(a[i].start, u.start)) {
                u.start = a[i].start;
            }
            if (bigeqthan(a[i].end, u.end)) {
                u.end = a[i].end;
            }
        }
    }
    d = sum(u.start, u.end); // Calculate the duration using the start and end times of u
    return d; // Returning the accumulated duration
}

std::ostream& operator<<(std::ostream& out, time_of_day t) {
    if (t.h < 10) out << '0';
    out << (int) t.h << ':';
    if (t.m < 10) out << '0';
    out << (int) t.m;
    return out;
}

std::ostream& operator<<(std::ostream& out, interval il) {
    return out << '[' << il.start << ',' << il.end << '[';
}
#endif // INTERVALS_H