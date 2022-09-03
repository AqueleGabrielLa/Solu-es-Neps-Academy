/* id do problema: 141 */
#include <stdio.h>
int main(){
    int M, result1, result2, min2;
    scanf("%d", &M);
    result1 = M / 60;
    result2 = result1 * 60;
    min2 = M - result2;
    printf("%d\n", result1);
    printf("%d", min2);

    return 0;
}