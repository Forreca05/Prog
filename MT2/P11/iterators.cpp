#include <sstream>
#include <vector>
#include <list>

template <typename Itr> 
std::string to_string(Itr start, Itr end) {
    std::ostringstream os;
    os << "[ ";
    for (Itr i = start; i != end; i++) {
        os << *i << ' ';
    }
    os << "]";
    return os.str();
}

template <typename Itr, typename T> 
int replace(Itr start, Itr end, const T& a, const T& b) {
    int count = 0;
    for (Itr i = start; i != end; i++) {
        if (*i == a) {
            *i = b;
            count++;
        }
    }
    return count;
}

