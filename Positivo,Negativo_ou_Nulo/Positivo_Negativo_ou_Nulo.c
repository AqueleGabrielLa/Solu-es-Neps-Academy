/* id do problema: 145 */
#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    if (N > 0){
        printf("positivo");
    } else if(N < 0){
        printf("negativo");
    } else {
        printf("nulo");
    }
}