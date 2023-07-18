// problema 1071

#include <iostream>

int main() {
    int X, Y;
    std::cin >> X >> Y;

    int somaImpares = 0;
    int inicio, fim;

    if (X < Y) {
        inicio = X + 1;
        fim = Y;
    } else {
        inicio = Y + 1;
        fim = X;
    }

    for (int i = inicio; i < fim; i++) {
        if (i % 2 != 0) {
            somaImpares += i;
        }
    }

    std::cout << somaImpares << std::endl;

    return 0;
}