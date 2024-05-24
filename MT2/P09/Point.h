#ifndef _POINT_H_
#define _POINT_H_

class Point {
public:
    Point();
    Point(int x, int y);
    int x() const;
    int y() const;
    void show() const;
private:
    int x_;
    int y_;
};

#endif