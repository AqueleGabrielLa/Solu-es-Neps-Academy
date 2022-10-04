/* id do problema: 1699 */
#include <iostream>

using namespace std;

int main(){

    double altura;
    int idade;

    cin >> altura >> idade;

    if (altura >= 1.60 || idade >= 18){
        cout << "Pode andar de montanha russa";
    } else {
        cout << "Nao pode andar de montanha russa";
    }

    return 0;
}