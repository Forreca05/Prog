#include <iostream>

bool is_leap(int y) {
    if (y % 4 != 0 or (y % 100 == 0 and y % 400 != 0)) {
        return false;
    }
    return true;
}

int last_day_of(int m, int y) {
    int md = 0;
    switch(m) {
        case(2): {md = is_leap(y) ? 29 : 28; break;}
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        {md = 31; break;}
        default: {md = 30;}
    }
    return md;
}

void advance(int delta, int& d, int& m, int& y) {
    while (delta > 0) {
        d++;
        delta--;
        if (d > last_day_of(m,y)) {
            d = 1;
            m++;
            if (m > 12) {
                m = 1;
                y++;
            }
        }
    }
}