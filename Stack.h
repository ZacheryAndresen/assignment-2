#ifndef STACK_H
#define STACK_H

#include <vector>
#include <numeric>

class Stack {
private:
    std::vector<int> stack;

public:
    void push(int value);
    void pop();
    bool empty() const;
    int top() const;
    double average() const;
    size_t size() const;
};

#endif
