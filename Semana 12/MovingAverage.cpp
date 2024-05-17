#ifndef MOVAVERAGE_
#define MOVAVERAGE_

#include <iostream>
#include <list>

class MovingAverage {
public:
    MovingAverage(std::size_t n) : n_(n) {}
    void update(double value) {
        if (values_.size() < n_) {
            values_.push_back(value);
        }
        else {
            values_.pop_front();
            values_.push_back(value);
        }
    }
    double get() const {
        double avg = 0.0;
        for (double x : values_) {
            avg += x;
        }
        return avg / values_.size();
    }
private:
    std::size_t n_;
    std::list<double> values_;
};

#endif