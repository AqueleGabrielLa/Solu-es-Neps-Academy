/* id do problema: 86*/
#include <stdio.h>
int main(){
    float A, B;
    float M;
    scanf("%f%f", &A, &B);
    M = (A + B)/2;
    if( M >= 7){
        printf("Aprovado");
    }else if( M < 7 && M > 4){
        printf("Recuperacao");
    }else{
        printf("Reprovado");
    }
}