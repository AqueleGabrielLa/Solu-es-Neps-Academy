/* id do problema: 1683 */
#include <iostream>

using namespace std;

int main(){
    string S;

    cin >> S;

    if(S == "roraima" || S == "acre" || S == "amapa" || S == "amazonas" || S == "para" || S == "rondonia" || S == "tocantins"){
        cout << "Regiao Norte";
    } else {
        cout << "Outra regiao";
    }

    return 0;
}