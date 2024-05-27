#include "MovingAverage.h"

MovingAverage::MovingAverage(std::size_t n) : n_(n) {} 
void MovingAverage::update(double value) {
    if (values_.size() < n_) {
        values_.push_back(value);
    }
    else {
        values_.pop_front();
        values_.push_back(value);
    }
}
double MovingAverage::get() const {
    double media = 0;
    for (double value : values_) media += value;
    return media / values_.size();
}