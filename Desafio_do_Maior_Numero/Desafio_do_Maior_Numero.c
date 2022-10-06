/* id do problema: 323 */
#include <stdio.h>

int main(){
    int N, maior;
    
    maior = 0;
    
    do{
        scanf("%d", &N);
        
        if (N >= maior){
            maior = N;
        }
    } while(N != 0);
    
    printf("%d", maior);
    
    return 0;
}