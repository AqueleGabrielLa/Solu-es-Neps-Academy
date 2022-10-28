/* id do problema: 1481 */
#include <iostream>

using namespace std;

int main(){
    int contV = 0, contP = 0;
    char X;

    for(int i = 1; i <= 6; i++){
        cin >> X;

        if(X == 'V'){
            contV++;
        } else if(X == 'P'){
            contP++;
        }
    }

    if(contP == 6){
        cout << "-1";
        return 0;
    }
    
    if(contV == 5 || contV == 6){
        cout << "1";
    } else if(contV == 3 || contV == 4){
        cout << "2";
    } else if(contV == 1 || contV == 2){
        cout << "3";
    }

    return 0;
}