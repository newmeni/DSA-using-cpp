#include <iostream>

int main() {
    int a = 4;

    // Print the top side of the square
    for (int i = 0; i < 7; i++) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    // Print the left and right sides of the square
    for (int i = 0; i < 5; i++) {
        std::cout << a << "       " << a << std::endl;
    }

    // Print the bottom side of the square
    for (int i = 0; i < 7; i++) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    return 0;
}
