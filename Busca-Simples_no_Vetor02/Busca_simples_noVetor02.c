/* problema do curso de introdução à programação do Neps Academy*/
#include <stdio.h>
int main(){
    int vetor[10];
    int X, tem, i;
    for(i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &X);
    tem = 0;
    for(i = 0; i < 10; i++){
        if(X == vetor[i]){
            tem++;
        }
    }
    if(tem > 0){
        printf("%d\n", tem);
        for(i=0; i<10; i++){
            if(X==vetor[i]){
                printf("%d ", i);
            }
        }
    } else {
        printf("Mia x");
    }
}