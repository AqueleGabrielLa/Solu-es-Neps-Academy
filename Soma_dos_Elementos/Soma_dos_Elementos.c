/* id do problema: 159*/
#include <stdio.h>
int main(){
    int N, g, soma;
    scanf("%d", &N);
    soma = 0;
    for (int i=0; i<N; i++){
        scanf("%d", &g);
        soma = soma + g;
    }
    printf ("%d", soma);
}