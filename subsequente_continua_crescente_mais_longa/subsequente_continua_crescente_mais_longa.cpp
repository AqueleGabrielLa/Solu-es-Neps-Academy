/* id do problema: 1787 */
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, c = 1;
    vector <int> vMaior;

    cin >> n;
    int v[n];
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    //processo de seleção de sequências com contador
    for(int i = 0; i < n; i++){
        if(v[i] <= v[i+1] || v[i] == v[i+1]){
            vMaior.push_back(c);
            c++;
            continue;
        } else {
            vMaior.push_back(c);
            c = 1;
        }
    }
    // processo de seleção da maior sequência adquirida
    int maior = 1;
    for(int i = 0; i < (int)vMaior.size(); i++){
        if(vMaior[i] >= maior){
            maior = vMaior[i];
        }
    }
    //saida
    cout << maior;

    return 0;
}