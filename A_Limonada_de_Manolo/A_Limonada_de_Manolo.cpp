/* id di problema: 193 */
#include <iostream>

using namespace std;

int main(){
    int l, c, cto = 0;

    cin >> l >> c;

    for(int i = 0; i < l; i++){
        cto = cto + c;
        
        c--;
        
        if(c <= 1){
            c = 1;
        }
    }

    cout << cto;

    return 0;
}