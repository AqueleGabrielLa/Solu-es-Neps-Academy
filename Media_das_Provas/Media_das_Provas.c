/* id do problema: 731 */
#include <stdio.h>

int main(){

    int n1, n2, n3;
    int p1, p2, p3;

    scanf("%d%d%d%d%d%d", &n1, &p1, &n2, &p2, &n3, &p3);

    printf("%d", ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3)); 

    return 0;
}