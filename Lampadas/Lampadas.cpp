/* Problema do curso de programação básica do CodCad, da plataforma Neps Academy */
#include <iostream>

using namespace std;
 
int main(){
    int l1 = 0; int l2 = 0;
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        
        cin >> x;
        
        if (x == 1) {
            l1 = not l1;
        } else if(x == 2){
            l1 = not l1;
            l2 = not l2;
        }
    }
    
    cout << l1 << endl << l2;
    
    return 0;   
}    