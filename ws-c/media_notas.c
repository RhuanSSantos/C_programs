#include <stdio.h>

int main()
{
    double nota1, nota2, nf;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    nf = nota1 + nota2;

    if(nf < 60.0){
        printf("NOTA FINAL = %.1lf", nf);
        printf("\nREPROVADO");
    } else {
        printf("NOTA FINAL = %.1lf", nf);
    }


    return 0;
}
