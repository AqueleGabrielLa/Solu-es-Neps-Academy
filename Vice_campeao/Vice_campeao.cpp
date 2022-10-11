/* id do problema: 516 */
#include <iostream>

using namespace std;

int main(){

    int n1, n2, n3, maior = 0, menor = 1000, meio;

    cin >> n1 >> n2 >> n3;

    int v[3] = {n1, n2, n3};

    for (int i = 0; i < 3; i++){
        if (v[i] > maior){
            maior = v[i];
        }
        if (v[i] < menor){
            menor = v[i];
        }
    }

    for (int i = 0; i < 3; i++){
        if(v[i] != maior && v[i] != menor){
            meio = v[i];
        }
    }

    cout << meio;

    return 0;
}