#include <stdio.h>

int main()
{
    double largura, comprimento, metro, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &metro);

    area = largura * comprimento;
    preco = metro * area;
    printf("Area do terreno = %.2lf", area);
    printf("\nPreco do terreno = %.2lf", preco);

    return 0;
}

