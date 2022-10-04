/* id do problema: 2024 */
#include <iostream>

using namespace std;

int main(){
    int v[3], ver = 0;

    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }

    if (v[0] == 8 || v[0] == 9){
        ver++;
    } 

    if (v[3] == 8 || v[3] == 9){
        ver++;
    }

    if (v[1] == v[2]){
        ver++
    }

    if(ver == 3){
        cout << "ignore";
    } else {
        cout << "answer";
    }

    return 0;
}