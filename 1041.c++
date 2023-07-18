// problema 1041

#include <stdio.h>
#include <math.h>

int main() {
    float X, Y;
    int lugar;
    const float TOLERANCIA = 0.0001;
    
    scanf("%f", &X);
    scanf("%f", &Y);
    
    X = roundf(X * 10) / 10;
    Y = roundf(Y * 10) / 10;

    if (fabs(X) < TOLERANCIA && fabs(Y) < TOLERANCIA) {
        printf("Origem\n");
    } else if (fabs(X) < TOLERANCIA && fabs(Y) >= TOLERANCIA) {
        printf("Eixo Y\n");
    } else if (fabs(X) >= TOLERANCIA && fabs(Y) < TOLERANCIA) {
        printf("Eixo X\n");
    } else if (X > 0 && Y > 0) {
        printf("Q1\n");
    } else if (X < 0 && Y > 0) {
        printf("Q2\n");
    } else if (X < 0 && Y < 0) {
        printf("Q3\n");
    } else if (X > 0 && Y < 0) {
        printf("Q4\n");
    }
   
    return 0;
}