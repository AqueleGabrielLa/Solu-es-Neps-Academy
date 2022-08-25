/* exercicio do curso de introdução à programação do Neps Academy*/
#include <stdio.h>
int main(){
    float N1, N2, M;
    scanf("%f%f", &N1, &N2);
    M = (N1*2 + N2*3) / (2 + 3);
    if (M >= 7){
        printf("Aprovado");
    } else if(M < 3){
        printf ("Reprovado");
    } else {
        printf("Final");
    }
}