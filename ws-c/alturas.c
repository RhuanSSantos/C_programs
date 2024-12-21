#include <stdio.h>

int main()
{
    int N, i, nmenores;
    double media, soma, percentualMenores;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    int idade[N];
    double altura[N];
    char nome[N][50];

    for(i = 0; i < N; i++){
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    soma = 0;
    for(i = 0; i < N; i++){
        soma = soma + altura[i];
    }
    printf("\n");
    media = soma / N;
    printf("Altura media: %.2lf\n", media);


    nmenores = 0;
    for(i = 0; i < N; i++){
        if(idade[i] < 16){
            nmenores = nmenores + 1;
        }
    }

    percentualMenores = (double)nmenores * 100 / N;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", percentualMenores);

    for(i = 0; i < N; i++){
        if(idade[i] < 16){
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}
