/* id do problema: 164 */
#include <stdio.h>

int main(){
    int X, Y;

    scanf("%d%d", &X, &Y);

    if(X % 2 == 0 && Y % 2 == 0){
        printf("1");
    } else if(X % 2 == 1 && Y % 2 == 1){
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}