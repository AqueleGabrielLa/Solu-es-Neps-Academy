/* id  do problema: 763 */
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];
    bool veri = true;
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector <int> vAlunos;
    vAlunos.push_back(-1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (int)vAlunos.size(); j++){
            // verificando se ele já está na lista
            if(v[i] != vAlunos[j]){
                veri = true;
            } else {
                veri = false;
                break;
            }
        }
        // mandando os alunos pra lista
            if(veri == true){
                vAlunos.push_back(v[i]);
            } else if(veri == false){
                veri = true;
                continue;
            }
    }
    
    //saida
    vAlunos.erase(vAlunos.begin());
    
    cout << vAlunos.size();

    
    return 0;
}