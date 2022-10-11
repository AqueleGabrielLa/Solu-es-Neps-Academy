/* id do problema: 753 */
#include <iostream>

using namespace std;

int main(){
    int ano1, ano2, idade;

    cin >> ano1 >> ano2;

    idade = ano1 - ano2;
    
    if(idade >= 18){
        cout << idade << endl << "Pode tirar carteira" << endl << idade - 18;
    } else if(idade < 18){
        cout << idade << endl << "Nao pode tirar carteira" << endl << 18 - idade;
    }

    return 0;
}