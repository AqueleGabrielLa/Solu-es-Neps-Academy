/* id do problema: 150 */
#include <stdio.h>
int main(){
    int maior;
    maior = 0;
    int vetor[3];

    for(int i=0; i<3; i++){
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    printf("%d", maior);
    
    return 0;
}