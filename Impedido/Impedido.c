/* id do problema: 46 */
#include <stdio.h>

int main(){

    int L, R, D;

    scanf("%d%d%d", &L, &R, &D);

    if((R > 50 && L < R && R > D)){
        printf("S");
    } else {
        printf("N");
    }

    return 0;
}