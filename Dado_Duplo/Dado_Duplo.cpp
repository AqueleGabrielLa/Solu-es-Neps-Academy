/* id do problema: 1977 */
#include <iostream>

using namespace std;

int main(){
    int N, d1, d2, tot1 = 100, tot2 = 100;
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        cin >> d1 >> d2;
        
        if(d1 == d2){
            continue;
        }
        if(d2 > d1){
            tot1 = tot1 - d2;
        } else if(d1 > d2){
            tot2 = tot2 - d1;
        }
    }
    
    cout << tot1 << endl << tot2;

    return 0;
}