/* id do problema: 2165 */
#include <iostream>

using namespace std;

int main(){
    int N, Nsorte;

    cin >> Nsorte;

    int i = 1;

    while(i > 0){
        cin >> N;

        if(N > Nsorte){
            cout << "menor";
        } else if(N < Nsorte){
            cout << "maior";
        } else if(N == Nsorte){
            cout << "correto";
            return 0;
        }

        i++; 
    }

    return 0;
}