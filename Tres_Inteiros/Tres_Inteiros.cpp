/* id do prblema: 1778 */
#include <iostream>

using namespace std;

int main(){
    int v[3], maior1 = 0, maior2 = 0;
    
    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }
    
    for (int i = 0; i < 3; i++){
        if (v[i] == 1){
            maior1++;
        } else if(v[i] == 2){
            maior2++;
        }
    }
    
    if(maior1 > maior2){
        cout << "1";
    } else if (maior2 > maior1){
        cout << "2";
    }

    return 0;
}