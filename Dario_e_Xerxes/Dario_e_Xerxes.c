/* id do problema: 25 */
#include <stdio.h>
int main(){
    int N, d, x, de, xe;
    
    scanf("%d", &N);
    de = 0;
    xe = 0;
    for (int i = 0; i < N; i++){
        scanf("%d%d", &d, &x);
        
        // 0
        if(d == 0){
            if(x == d + 1 || x == d + 2){
                de++;
                continue;
            }
        }
        // 1
        if(d == 1){
            if(x == d + 1 || x == d + 2){
                de++;
                continue;
            }
        }
        // 2
        if(d == 2){
            if(x == d + 1 || x == d + 2){
                de++;
                continue;
            }
        }
        // 3
        if(d == 3){
            if(x == d + 1 || x == 0){
                de++;
                continue;
            }
        }
        // 4
        if(d == 4){
            if(x == 0 || x == 1){
                de++;
                continue;
            }
        }
        
        xe++;
        
    }
    
    
    if(de > xe){
        printf ("dario");
    }else if (xe > de){
        printf("xerxes");
    }

    return 0;
}