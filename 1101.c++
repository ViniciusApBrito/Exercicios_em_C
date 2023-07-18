// problema 1101

#include <iostream>

int main() {
    int M, N;

    while (true) {
        std::cin >> M >> N;

        if (M <= 0 || N <= 0) {
            break;
        }

        int menor = (M < N) ? M : N;
        int maior = (M > N) ? M : N;
        int soma = 0;

        for (int i = menor; i <= maior; i++) {
            std::cout << i << " ";
            soma += i;
        }

        std::cout << "Sum=" << soma << std::endl;
    }

    return 0;
}
