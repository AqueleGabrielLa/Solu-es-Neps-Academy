/* Problema do curso de programação básica do CodCad, da plataforma Neps Academy */
#include <iostream>

using namespace std;

int main(){
    int N, i, acertos;
    string S1, S2;

    cin >> N >> S1 >> S2;

    acertos = 0;


    for (i = 0; i < N; i++){
        if (S2[i] == S1[i]){
            acertos++;
        }
    }

    cout << acertos;

    return 0;
}