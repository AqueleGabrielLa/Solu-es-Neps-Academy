/* problema do curso de introdução à informática do Neps Academy */
#include <stdio.h>

int main(){
    int N, i;
    scanf("%d", &N);
    for(i = 1; N > 1; N--){
        i = i * N;
    }
    printf("%d", i);
}
  

