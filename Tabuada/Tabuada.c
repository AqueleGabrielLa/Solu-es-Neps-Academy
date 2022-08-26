/* problema do curso de introdução à informática do Neps Academy */
#include <stdio.h>
int main(){
    int X, i;
    scanf("%d", &X);
    for(i=1;i<=10;i++){
        printf("%d%s%d%s%d%s", X ," * ", i, " = ",(X * i), "\n"); 
    }
}