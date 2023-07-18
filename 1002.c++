// problema 1002

#include <iostream>
#include <iomanip>

int main() {
    double raio, area;
    double pi = 3.14159;

    std::cin >> raio;
    area = pi * raio * raio;

    std::cout << "A=" << std::fixed << std::setprecision(4) << area << std::endl;

    return 0;
}
