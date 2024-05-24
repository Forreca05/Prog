#include "Stack.h"

template<typename T>
Stack<T>::Stack() = default;

template <typename T>
size_t Stack<T>::size() const {
    return elements.size();
}

template <typename T>
bool Stack<T>::peek(T& elem) const {
    if (!elements.empty()) {
        elem = elements.back();
        return true;
    }
    return false;
}

template <typename T>
bool Stack<T>::pop(T& elem) {
    if (!elements.empty()) {
        elem = elements.back();
        elements.pop_back();
        return true;
    }
    return false;
}

template <typename T>
void Stack<T>::push(const T& elem) {
    elements.push_back(elem);
}
