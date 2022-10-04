/* id do problema: 1701 */
#include <iostream>

using namespace std;

int main(){
    double T;

    cin >> T;

    if (T >= 30){
        cout << "Dia lindo, dia quente, hoje e dia de sorvetinho!!!";
    } else if (T < 30){
        cout << "Ops, dia frio, sem sorvetinho!!!";
    }

    return 0;
}