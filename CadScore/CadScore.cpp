/* id do problema: 217 */
#include <iostream>

using namespace std;

int main(){

    int init, N, N1, soma, num;

    cin >> init >> N;

    cin >> N1;

    soma = init + N1;

    for(int i = 0; i < N - 1; i++){
        cin >> num;

        soma = soma + num;
        if(soma < 0){
            soma = 0;
        } else if (soma > 100){
            soma = 100;
        }
    }

    cout << soma;

    return 0;
}