/* exercicio do curso de introdução à programação do Neps Academy*/
#include <stdio.h>
int imp_ar(int n1, int n2){
    if((n1+n2)%2 == 0 ){
        printf("Bino");
    }else{
        printf("Cino");
    }
}

int main(){
    int B, C;
    scanf("%d%d", &B, &C);
    imp_ar(B, C);
}