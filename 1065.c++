// problema 1065

#include <iostream>

int main() {
    int valores[5];
    int quantidadePares = 0;

    for (int i = 0; i < 5; i++) {
        std::cin >> valores[i];

        if (valores[i] % 2 == 0) {
            quantidadePares++;
        }
    }

    std::cout << quantidadePares << " valores pares" << std::endl;

    return 0;
}
