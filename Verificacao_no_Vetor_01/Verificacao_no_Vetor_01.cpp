/* id do problema: 196 */
#include <iostream>

using namespace std;

int main(){
    int N, Q, X;
    bool ctrl = false;

    cin >> N;
    int v[N];

    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    cin >> Q;

    for(int i = 0; i < Q; i++){
        cin >> X;
        for(int j = 0; j < N; j++){
            if(v[j] == X){
                cout << "Sim";
                ctrl = true;
                break;
            }
        }
        if(ctrl == true){
            ctrl = false;
        } else if(ctrl == false){
            cout << "Nao";
        }
    }

    return 0;
}