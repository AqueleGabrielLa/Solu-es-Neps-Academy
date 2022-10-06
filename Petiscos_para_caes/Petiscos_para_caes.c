/* id do problema: 1413 */
#include <stdio.h>

int main(){

    int N1, N2, N3, result;

    scanf("%d%d%d", &N1, &N2, &N3);

    result = (N1 * 1) + (N2 * 2) + (N3 * 3);

    if(result >= 10){
        printf("happy");
    } else {
        printf("sad");
    }

    return 0;
}