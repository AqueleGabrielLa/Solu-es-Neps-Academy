/* id do problema: 980 */
#include <iostream>
#include <vector>

using namespace std;

int main(){

    int N, P, M, x;
    vector <int> v;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> x;
        v.push_back(x);
    }
    
    cin >> P >> M;
    
    int cp = 0, cm = 0;
    
    for(int i = 0; i < (int)v.size(); i++){
        if(v[i] == 1){
            cp++;
        } else if(v[i] == 2){
            cm++;
        }
    }
    
    if(cp > P || cm > M){
        cout << "N";
        return 0;
    } else {
        cout << "S";
    }

    return 0;
}