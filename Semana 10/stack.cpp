#include <vector>

template <typename T>
class Stack {
public:
    Stack() = default;
    int size() const;
    bool peek(T& elem) const;
    bool pop(T& elem);
    void push(const T& elem);

private:
    std::vector<T> elements;
};

template<typename T>
int Stack<T>::size() const {
    return elements.size();
}

template<typename T>
bool Stack<T>::peek(T& elem) const {
    if (elements.empty()) {
        return false;
    }
    elem = elements.back();
    return true;
}

template<typename T>
bool Stack<T>::pop(T& elem) {
    if (elements.empty()) {
        return false;
    }
    elem = elements.back();
    elements.pop_back();
    return true;
}

template<typename T>
void Stack<T>::push(const T& elem) {
    elements.push_back(elem);
}
