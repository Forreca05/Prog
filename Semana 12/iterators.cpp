#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <list>

template <typename Itr> 
std::string to_string(Itr start, Itr end) {
    std::ostringstream out;
    out << "[ ";
    for (Itr i = start; i != end; ++i) {
        out << *i << " ";
    }
    out << "]";
    return out.str();
}

template <typename Itr, typename T> 
int replace(Itr start, Itr end, const T& a, const T& b) {
    int count = 0;
    for (Itr it = start; it != end; ++it) {
        if (*it == a) {
            *it = b;
            count++;
        }
    }
    return count;
}