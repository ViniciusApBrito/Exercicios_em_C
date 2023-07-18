// problema 1075

#include <iostream>

int main() {
    int N;
    std::cin >> N;

    for (int i = 1; i <= 10000; i++) {
        if (i % N == 2) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
