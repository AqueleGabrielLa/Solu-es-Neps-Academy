/* id do problema: 88 */
#include <stdio.h>
int main(){
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    if(A != B && A != C){
        printf("A");
    }else if(B != A && B != C){
        printf("B");
    } else if(C != A && C != B){
        printf("C");
    } else {
        printf("*");
    }
 }