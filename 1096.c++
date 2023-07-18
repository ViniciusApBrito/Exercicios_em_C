// problema 1096

#include <iostream>

int main() {
    int i = 1;
    int j = 7;

    while (i <= 9) {
        std::cout << "I=" << i << " J=" << j << std::endl;
        j--;

        if (j < 5) {
            i += 2;
            j = 7;
        }
    }

    return 0;
}
