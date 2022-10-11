/* Problema do curso de programação básica do CodCad, da plataforma Neps Academy */
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int N, v[10000], i;

    cin >> N;

    for(i = 0; i < N; i++){
        cin >> v[i];
    }
    
    sort(v, v+N);
    
    for(i = 0; i < N; i++){
        cout << v[i] << " ";
    }

    return 0;
}