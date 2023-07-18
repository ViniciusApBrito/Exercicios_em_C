// Problema 1014

#include <iostream>
#include <iomanip>

int main()
{
    int distancia;
    double combustivel, consumoMedio;

    std::cin >> distancia >> combustivel;

    consumoMedio = distancia / combustivel;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << consumoMedio << " km/l" << std::endl;

    return 0;
}
