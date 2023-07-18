// problema 1073

#include <iostream>

int main() {
    int N;
    std::cin >> N;

    for (int i = 2; i <= N; i += 2) {
        int quadrado = i * i;
        std::cout << i << "^2 = " << quadrado << std::endl;
    }

    return 0;
}
