#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, j, negativo;

    cout << "Qual a ordem da matriz? ";
    cin >> N;

    int mat[N][N];
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }
    cout << "DIAGONAL PRINCIPAL:";
    for(i = 0; i < N; i++){
        cout << mat[i][i] << " ";
    }

    negativo = 0;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(mat[i][j] < 0){
                negativo = negativo + 1;
            }
        }
    }
    cout << endl << "QUANTIDADE DE NEGATIVOS = " << negativo;
    return 0;
}
