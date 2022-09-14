/* id do problema: 214 */
#include <stdio.h>
int main(){
    int A1, A2, B1, H1, B2, H2;

    scanf("%d %d", &B1, &H1);
    scanf("%d %d", &B2, &H2);

    A1 = B1 * H1;
    A2 = B2 * H2;

    if(A1 > A2){
        printf("Primeiro");
    } else if (A2 > A1){
        printf("Segundo");
    } else if(A1 == A2){
        printf("Empate");
    }

    return 0;
}