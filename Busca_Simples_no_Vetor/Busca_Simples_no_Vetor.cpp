/* id do problema: 1235 */
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, X, Nver;
    cin >> N;
    
    vector <int> v;
    
    for(int i = 0; i < N; i++){
        cin >> X;
        v.push_back(X);
    }
    
    cin >> Nver;
    
    for(int i = 0; i < v.size(); i++){
        if(v[i] == Nver){
            cout << "pertence";
            return 0;
        }
    }
    
    cout << "nao_pertence";

    return 0;
}