#include <iostream>
#include "test.h"

template <typename T>
T min(const T& a, const T& b) {
    return (a < b) ? a : b;
}

template <typename T>
T max(const T& a, const T& b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << min(3, 5) << std::endl; // Should print 3
    std::cout << max(3, 5) << std::endl; // Should print 5
    std::cout << min(3.5, 2.5) << std::endl; // Should print 2.5
    std::cout << max(3.5, 2.5) << std::endl; // Should print 3.5
    return 0;
}