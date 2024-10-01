#include "Single_Linked_List.h"

int main() {
    Single_Linked_List<int> list;

    // Operations on the list
    list.push_front(1);
    list.push_back(2);
    list.push_back(3);
    list.insert(1, 5);

    std::cout << "Front: " << list.front() << std::endl;
    std::cout << "Back: " << list.back() << std::endl;
    std::cout << "Size: " << list.size() << std::endl;

    list.remove(1);
    std::cout << "After removing index 1, front: " << list.front() << std::endl;

    return 0;
}
