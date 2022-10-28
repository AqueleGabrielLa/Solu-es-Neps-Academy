/* id do problema: 2066 */
#include <iostream>

using namespace std;

int main(){
    int id1, id2, c = 0;
    
    cin >> id1 >> id2;
    int v[2] = {id1, id2};
    
    for(int i = 0; i <= 1; i++){
        if(v[i] >= 60){
            c = c + 20;
        } else if(v[i] >= 18 && v[i] <= 59){
            c = c + 30;
        } else if(v[i] <= 17){
            c = c + 15;
        }
    }
    
    cout << c;

    return 0;
}