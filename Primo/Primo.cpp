/* id do problema: 247 */
#include <iostream>

using namespace std;

int main(){
    int N, c = 0;
    
    cin >> N;
    
    for (int i = 1; i <= N; i++){
        if(N % i == 0){
            c++;
        }
    }
    
    if(c == 2){
        cout << "S";
    } else {
        cout << "N";
    }

    return 0;
}