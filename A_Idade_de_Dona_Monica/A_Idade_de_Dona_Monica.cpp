/* id do porblema: 463 */
#include <iostream>

using namespace std;

int main(){

    int M, F1, F2, F3, c, i, maior = 0;

    cin >> M >> F1 >> F2;

    for (i = 0; i < 110; i++){
        c = i + F1 + F2;
        
        if(c == M){
            F3 = i;
            int v[3] = {F1, F2, F3};
            
            for(i = 0; i < 3; i++){
                if (v[i] > maior){
                    maior = v[i];   
                }
            }
            break;
        }
    } 

    cout << maior;

    return 0;
}