/* id do problema: 175 */
#include <stdio.h>

int main(){
    int c = 0, N;

    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            c++;
        }
    }

    if(c == 2){
        printf("S");
    } else {
        printf("N");
    }

    return 0;
}