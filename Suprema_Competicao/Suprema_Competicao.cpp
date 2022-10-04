/* id do problema: 859 */
#include <iostream>

using namespace std;

int main(){
    int N, d, x, we, e11;
    
    cin >> N;
    we = 0;
    e11 = 0;
    for (int i = 0; i < N; i++){
        cin >> d >> x;
        
        // 0
        if(d == 0){
            if(x == d + 1 || x == d + 2){
                we++;
                continue;
            }
        }
        // 1
        if(d == 1){
            if(x == d + 1 || x == d + 2){
                we++;
                continue;
            }
        }
        // 2
        if(d == 2){
            if(x == d + 1 || x == d + 2){
                we++;
                continue;
            }
        }
        // 3
        if(d == 3){
            if(x == d + 1 || x == 0){
                we++;
                continue;
            }
        }
        // 4
        if(d == 4){
            if(x == 0 || x == 1){
                we++;
                continue;
            }
        }
        
        e11++;
        
    }
    
    
    if(we > e11){
        printf ("will");
    }else if (e11 > we){
        printf("11");
    }

    return 0;
}