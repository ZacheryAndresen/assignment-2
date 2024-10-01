#include "Stack.h"
#include <iostream>

void Stack::push(int value) {
    stack.push_back(value);
}

void Stack::pop() {
    if (!stack.empty()) {
        stack.pop_back();
    }
    else {
        std::cout << "Stack is empty!" << std::endl;
    }
}

bool Stack::empty() const {
    return stack.empty();
}

int Stack::top() const {
    if (!stack.empty()) {
        return stack.back();
    }
    throw std::out_of_range("Stack is empty");
}

double Stack::average() const {
    if (stack.empty()) {
        return 0.0;
    }
    return std::accumulate(stack.begin(), stack.end(), 0.0) / stack.size();
}

size_t Stack::size() const {
    return stack.size();
}
