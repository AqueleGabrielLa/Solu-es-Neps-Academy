/* id do problema: 224 */
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, ne;
    vector <int> v;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> ne;
        v.push_back(ne);
    }
    
    int menor = 100000000;
    
    for(int i = 0; i < v.size(); i++){
        if(N == 1 && v[0] == 0){
            cout << 0;
            return 0;
        } else if (N == 1){
            cout << v[0];
            return 0;
        }
        
        if(v[i] == 0){
            cout << 0;
            return 0;
        }
        
        if(v[i] < menor){
            menor = v[i];
            continue;
        }
    }
    
    cout << menor;

    return 0;
}