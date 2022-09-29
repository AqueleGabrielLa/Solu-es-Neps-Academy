/* id do problema: 20 */
#include <iostream>

using namespace std;

int main(){
    int i, V[3];
    
    for (i = 0; i < 3; i++){
        cin >> V[i];
    }
    
    if (V[0] == V[1]){ // posição 0
        cout << V[2];
    } else if (V[0] == V[2]){
        cout << V[1];
    } else if (V[1] == V[0]){ // posição 1
        cout << V[2];
    } else if (V[1] == V[2]){
        cout << V[0];
    } else if (V[2] == V[0]){ // posição 2
        cout << V[1];
    } else if (V[2] == V[2]){
        cout << V[1];
    }
    
    return 0;
}