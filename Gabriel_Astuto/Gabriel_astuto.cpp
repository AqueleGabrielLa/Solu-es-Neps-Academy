/* id do problema: 1706 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int N;
    string S1, S2;
    
    getline(cin, S1);

    cin >> N;

    for(int i = N; i < S1.size(); i++){
        S2.push_back(S1[i]);
    }
    
    cout << S2;
    
    return 0;
}