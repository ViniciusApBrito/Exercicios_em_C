// problema 1079

#include <iostream>
#include <iomanip>

int main() {
    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        double valor1, valor2, valor3;
        std::cin >> valor1 >> valor2 >> valor3;

        double mediaPonderada = (valor1 * 2 + valor2 * 3 + valor3 * 5) / 10;

        std::cout << std::fixed << std::setprecision(1) << mediaPonderada << std::endl;
    }

    return 0;
}
