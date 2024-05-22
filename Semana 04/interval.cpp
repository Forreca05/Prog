#ifndef __interval_h__
#define __interval_h__

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

interval intersection(interval a, interval b) {
  interval r = {{0,0},{0,0}};
  if (lessthan(b.start, a.end) && lessthan(a.start,b.end)) {
    r.start = lessthan(a.start, b.start) ? b.start : a.start;
    r.end = lessthan(a.end, b.end) ? a.end : b.end;
  }
  return r;
}
ostream& operator<<(ostream& out, time_of_day t) {
  if (t.h < 10) out << '0';
  out << (int) t.h << ':';
  if (t.m < 10) out << '0';
  out << (int) t.m;
  return out;
}

ostream& operator<<(ostream& out, interval il) {
  return out << '[' << il.start << ',' << il.end << '[';
}

#endif // __interval_h__