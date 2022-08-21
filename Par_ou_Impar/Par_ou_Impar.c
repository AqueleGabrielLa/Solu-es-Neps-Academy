/* id do problema: 148 */
#include <stdio.h>
int main(){
    int B, C;
    int N;
    scanf("%d%d", &B, &C);
    N = B + C;
    if (N%2 == 0){
        printf("Bino");
    }else{
        printf("Cino");
    };
}