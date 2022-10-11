/* id do porblema: 2025 */
#include <iostream>

using namespace std;

int main(){

    int N, i, c = 0;
    string S1, S2;

    cin >> N;
    
    cin >> S1 >> S2;
    
    for(i = 0; i < N; i++){
        if (S1[i] == S2[i] && S1[i] == 'C'){
            c++;
        }
    }

    cout << c;

    return 0;
}