/* id do problema: 17 */

#include <iostream>

using namespace std;

int main(){

    int N, D, A, c = 0;

    cin >> N >> D >> A;

    for(int i = A; i <= N; i++){
        
        if(A == D){
            cout << 0;
            return 0;
        }
        
        int j = 1;
        if(A == N){
            A = 0;
            while(j <= N){
                c++;
                A++;
                if(A == D){
                    cout << c;
                    return 0;
                }
                j++;
            }
        }
        
        c++;
        A++;
        if(A == D){
            break;
        }
    }

    cout << c;

    return 0;
}
