// problema 1078

#include <iostream>

int main() {
    int N;
    std::cin >> N;

    for (int i = 1; i <= 10; i++) {
        int resultado = i * N;
        std::cout << i << " x " << N << " = " << resultado << std::endl;
    }

    return 0;
}
