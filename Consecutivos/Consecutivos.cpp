/* Problema do curso de programação básica do CodCad, da plataforma Neps Academy */
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int N, x[10000], c = 0, b = 0;
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    for(int i = 0; i < N-1; i++) {
        if(x[i] == x[i+1]) {
            c++;
	    } else {
            if(c > b) {
                b = c;
            }
            c = 0;
        }
       
        if(c > b && i == N-2) {
           b = c;
        }
    }
   
    cout << b+1;

    return 0;
}
