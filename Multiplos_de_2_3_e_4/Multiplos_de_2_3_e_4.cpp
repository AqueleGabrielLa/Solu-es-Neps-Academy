/* id do problema: 155 */
#include <iostream>

using namespace std;

int main(){
    int N, v[100], i, nd2 = 0, nd3 = 0, nd4 = 0;
    
    cin >> N;
    
    for (i = 0; i < N; i++){
        cin >> v[i];
    }
    
    for (i = 0; i < N; i++){
        if (v[i] % 2 == 0){
            nd2++;
        }
        if (v[i] % 3 == 0){
            nd3++;
        }
        if (v[i] % 4 == 0){
            nd4++;
        }
    }
    cout << nd2 << endl << nd3 << endl << nd4;
    
    return 0;
}