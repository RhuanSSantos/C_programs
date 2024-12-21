#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, menor;
    double media, soma, porcentagem;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    int idade[N];
    double altura[N];
    string nome[N];

    for(i = 0; i < N; i++){
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
    }

    soma = 0;
    for(i = 0; i < N; i++){
        soma = soma + altura[i];
    }

    media = (double)soma / N;
    cout << fixed << setprecision(2);
    cout << endl << "Altura media: " << media;

    menor = 0;
    for(i = 0; i < N; i++){
        if(idade[i] < 16){
            menor = menor + 1;
        }
    }

    porcentagem = (double)menor * 100.0 / N;
    cout << fixed << setprecision(1);
    cout << endl << "Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;

    for(i = 0; i < N; i++){
        if(idade[i] < 16){
            cout << nome[i] << endl;
        }
    }




    return 0;
}
