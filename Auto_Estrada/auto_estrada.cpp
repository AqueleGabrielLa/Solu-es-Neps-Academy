/* id do problema: 240 */
#include <iostream>

using namespace std;

int main(){
    int N, c = 0;
    string S;

    cin >> N;

    cin >> S;

    for(int i = 0; i < N; i++){
        if(S[i] == 'D'){
            continue;
        } else if(S[i] == 'C'){
            c = c + 2;
            continue;
        } else if(S[i] == 'A'){
            c++;
            continue;
        } else if(S[i] == 'P'){
            c = c + 2;
        }
    }
    
    cout << c;

    return 0;
}