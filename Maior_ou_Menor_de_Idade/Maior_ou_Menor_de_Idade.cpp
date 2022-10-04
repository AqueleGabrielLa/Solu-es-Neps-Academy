/* id do problema: 754 */
#include <iostream>

using namespace std;

int main(){
    int ano1, ano2, idade;

    cin >> ano1 >> ano2;

    idade = ano1 - ano2;

    if(idade >= 18){
        cout << idade << endl << "Maior";
    } else {
        cout << idade << endl << "Menor";
    }

    return 0;
}