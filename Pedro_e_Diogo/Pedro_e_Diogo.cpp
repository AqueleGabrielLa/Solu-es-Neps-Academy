/* id do problema: 1272 */
#include <iostream>
#include <string>

using namespace std;

int main(){
    int c;
    string S;

    getline(cin, S);

    for(int i = 0; i < S.size(); i++){
        if(S[i] == ' '){
            continue;
        }
        c++;
    }

    cout << c;

    return 0;
}