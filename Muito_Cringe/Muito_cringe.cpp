/* id do prblema: 1536 */
#include <iostream>

using namespace std;

int main(){
    int ano;
    
    cin >> ano;
    
    if (ano <= 1979){
        cout << "Geracao X!!!";
    } else if (ano >= 1980 && ano <= 1995){
        cout << "Geracao Millennials. Muito cringe!!!";
    } else if (ano >= 1996 && ano <= 2010){
        cout << "Geracao Z!!!";
    } else if (ano >= 2011){
        cout << "Geracao Alpha!!!";
    }

    return 0;
}