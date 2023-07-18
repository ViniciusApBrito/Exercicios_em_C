// Problema 1038

#include <stdio.h>

int main()
{
    int codigo;
    int qtd;
    float total;
    float preco;
    scanf("%d", &codigo);
    scanf("%d", &qtd);

    switch (codigo)
    {
    case 1:
        preco = 4;
        break;
    case 2:
        preco = 4.5;
        break;
    case 3:
        preco = 5;
        break;
    case 4:
        preco = 2;
        break;
    case 5:
        preco = 1.5;
        break;
    }
    total = preco * qtd;

    printf("Total: R$ %.2f\n", total);

    return 0;
}