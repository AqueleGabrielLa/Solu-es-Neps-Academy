/* id do problema: 384 */
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, num, Nfi, Nsub;
    vector <int> v1;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> num;
        v1.push_back(num);
    }
    cin >> Nfi;
    for(int i = 1; i <= Nfi; i++){
        cin >> Nsub;
        
        for(int j = 0; j < v1.size(); j++){
            if(v1[j] == Nsub){
                v1[j] = 0;
                break;
            }
        }
    }
    
    for(int i = 0; i < v1.size(); i++){
        if(v1[i] == 0){
            continue;
        }
        cout << v1[i] << " ";
    }
    
    return 0;
}