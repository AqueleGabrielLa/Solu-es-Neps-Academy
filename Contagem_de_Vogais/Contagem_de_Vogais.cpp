/* id do problema: 1779 */
#include <iostream>

using namespace std;

int main(){
    string S;
    int N, vogais = 0;
    
    cin >> N;
    cin >> S;
    
    for (int i = 0; i < N; i++){
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' ){
            vogais++;
        } 
    }

    cout << vogais;
    
    return 0;
}