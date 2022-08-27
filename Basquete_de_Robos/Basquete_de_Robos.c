/* id do problema: 162 */
#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    if(N <= 800){
        printf("1");
    }else if (N > 800 && N <= 1400){
        printf("2");
    }else if (N > 1400 && N <= 2000){
        printf("3");
    }
}