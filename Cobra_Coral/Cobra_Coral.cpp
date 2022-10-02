/* id do problema: 72 */
#include <iostream>

using namespace std; 

int main(){
    int v[4], i;
    char result;
    
    for (i = 0; i < 4; i++){
        cin >> v[i];
    }
    
    for (i = 0; i < 1; i++){
        if (v[i] == v[i + 3]){
            result = 'F';
        } else {
            result = 'V';
        }
    }
    
    cout << result;
    
    return 0;
}