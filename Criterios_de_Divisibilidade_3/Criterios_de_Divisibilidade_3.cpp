/* id do problema: 272 */
#include <iostream>

using namespace std; 

int main(){
    int N;
    
    cin >> N;
    
    if(N % 11 == 0){
        cout << "S";
    } else {
        cout << "N";
    }
    
    return 0;
}