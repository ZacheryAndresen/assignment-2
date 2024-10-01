#include "Stack.h"
#include <iostream>

int main() {
    Stack stack;

    std::cout << "Stack empty? " << (stack.empty() ? "Yes" : "No") << std::endl;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.top() << std::endl;

    stack.pop();
    std::cout << "Top element after pop: " << stack.top() << std::endl;

    std::cout << "Average of stack elements: " << stack.average() << std::endl;

    return 0;
}
