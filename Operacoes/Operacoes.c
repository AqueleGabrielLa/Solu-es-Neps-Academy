/* id do problema: 218 */
#include <stdio.h>
int main(){
    char n;
    double n1, n2;
    scanf("%c", &n);
    scanf("%lf%lf", &n1, &n2);
    if(n == 'M'){
        printf("%.2lf", n1 * n2);
    } else if(n == 'D'){
        printf("%.2lf", n1 / n2);
    }
    
    return 0;
}