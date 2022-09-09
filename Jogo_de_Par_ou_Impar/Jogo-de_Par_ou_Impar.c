/* id do problema: 51 */
#include <stdio.h>
int main(){
    int P, win, N, d1, d2;

    scanf("%d", &P);
    scanf("%d%d", &d1, &d2);
    N = d1 + d2;
    
    if (P == 0){
        win = 0;
        if(N % 2 == 0){
            printf("%d", win);
        } else if (N % 2 == 1){
            printf("%d", 1);
        }
    } else if (P == 1){
        win = 1;
        if(N % 2 == 0){
            printf("%d", win);
        } else if (N % 2 == 1){
            printf("%d", 0);
        }
    }

    return 0;
}