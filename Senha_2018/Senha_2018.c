/* id do problema: 153 */
#include <stdio.h>

int main(){

    int N, cont = 0;
    
    while(N != 2018){
        scanf("%d", &N);

        cont++;
    }

    printf("%d", cont - 1);

    return 0;
}