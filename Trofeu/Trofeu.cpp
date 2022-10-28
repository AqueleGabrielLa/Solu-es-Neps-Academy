/* id do problema: 2126 */
#include <iostream>

using namespace std;

int main(){
    int v[5];
    int cM = 1, cm = 0, contm = 0;

    for(int i = 0; i < 5; i++){
        cin >> v[i];
    }

    for(int i = 1; i < 5; i++){
        if(v[i] == v[0]){
            cM++;
        }
    }
    
    for(int i = 1; i < 5; i++){
        if(v[i] == v[0]){
            continue;
        }
        
        if(v[i] > cm){
            cm = v[i];
        }
    }
    
    for(int i = 1; i < 5; i++){
        if(v[i] == cm){
            contm++;
        }
    }
    
    cout << cM << " " << contm;

    return 0;
}