/* id do problema: 1528 */
#include <iostream>

using namespace std;

int main(){

    int v[10000], N, i;
    bool ver = 1;
    
    cin >> N;
    
    for(i = 0; i < N; i++){
        cin >> v[i]; 
    }
    
    for(i = 0; i < N - 1; i++){
        if(v[i] <= v[i+1]){
            ver = 1;
            continue;
        } else if(v[i] > v[i+1]){
            ver = 0;
            break;
        }
    }

    if(ver == 1){
        cout << "Notas validas";
    } else if (ver != 1){
        cout << "Notas invalidas";
    }

    return 0;
}