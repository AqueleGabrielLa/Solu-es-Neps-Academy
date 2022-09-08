/* id do problema: 41 */
#include <stdio.h>
int main(){
    int N, i, sub, conc;
    int vetor[1000] = {};
    scanf("%d", &N);
    conc = 0;
    sub =0;
    
    for(i=0; i<N; i++){
        scanf("%d", &vetor[i]);
        if (vetor[i] < 50){
            sub++;
        }else if(vetor[i] >= 50 && vetor[i] < 85){
            conc++;
        }
    }
    printf("%d %d", sub,conc);

    return 0;
}