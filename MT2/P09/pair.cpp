#include <iostream>
#include <algorithm>
#include <vector>

template<typename T, typename U>
class Pair {
public:
    Pair(const T& first, const U& second) : first_(first), second_(second) {}
    T get_first() const {return first_;}
    U get_second() const {return second_;}
    void show() const {std::cout << '{' << first_ << ',' << second_ << '}';};
private:
    T first_;
    U second_;
};

template <typename T, typename U>
void sort_by_first(std::vector<Pair<T, U>>& pairs) {
    std::sort(pairs.begin(), pairs.end(), 
              [](const Pair<T, U>& a, const Pair<T, U>& b) {
                  return a.get_first() < b.get_first();
              });
}

template <typename T, typename U>
void sort_by_second(std::vector<Pair<T, U>>& pairs) {
    std::sort(pairs.begin(), pairs.end(), 
              [](const Pair<T, U>& a, const Pair<T, U>& b) {
                  return a.get_second() < b.get_second();
              });
}

template <typename T, typename U>
void show(const std::vector<Pair<T, U>>& pairs) {
    std::cout << "{";
    for (const auto& pair : pairs) {
        pair.show();
    }
    std::cout << "}";
}

