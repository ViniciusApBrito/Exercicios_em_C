//problema 1021

#include <stdio.h>
#include <math.h>

int main() {
    int notas[6] = {100, 50, 20, 10, 5, 2};
    double moedas[6] = {1.0, 0.50, 0.25, 0.10, 0.05, 0.01};
    int qtdNotas[6] = {0, 0, 0, 0, 0, 0};
    int qtdMoedas[6] = {0, 0, 0, 0, 0, 0};
    double N;
    scanf("%lf", &N);
    int nInt = (int) N;
    double nFracionario = N - nInt;

    for (int i = 0; i < 6; i++) {
        qtdNotas[i] = nInt / notas[i];
        nInt = nInt % notas[i];
    }

    nFracionario += nInt;

    for (int i = 0; i < 6; i++) {
        while (nFracionario >= moedas[i] - 1e-6) {
            qtdMoedas[i]++;
            nFracionario -= moedas[i];
        }
    }

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d nota(s) de R$ %d.00\n", qtdNotas[i], notas[i]);
    }
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d moeda(s) de R$ %.2lf\n", qtdMoedas[i], moedas[i]);
    }

    return 0;
}