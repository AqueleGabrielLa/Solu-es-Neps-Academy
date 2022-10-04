/* id do problema: 1529 */
#include <iostream>

using namespace std;

int main(){
    double alt;

    int altos = 0;

    for (int i = 0; i < 8; i++){
        cin >> alt;

        if(alt > 1.80){
            altos++;
        }
    }

    cout << altos << " jogadores encontrados"; 

    return 0;
}