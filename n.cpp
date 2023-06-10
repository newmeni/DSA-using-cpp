#include <iostream>
#include <vector>

int main() {
    int a;
    std::cin >> a;

    std::vector<int> array(a);
    for (int i = 0; i < a; i++) {
        std::cin >> array[i];
    }

    int lar = array[0];  // Initialize lar with the first element
    for (int i = 0; i < a; i++) {
        for (int b = i + 1; b < a; b++) {
            if (array[b] > lar) {
                lar = array[b];
            }
        }

        if (array[i] == lar) {
            std::cout << array[i] << " ";
        }
    }

    return 0;
}
