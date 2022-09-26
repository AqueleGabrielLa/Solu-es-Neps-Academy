/* id do problema: 234 */
#include <stdio.h>
int main(){
    int L, H, P, R, CM, Ci;

    scanf("%d%d%d%d", &L, &H, &P, &R);

    CM = (L * L) + (H * H) + (P * P);
    
    Ci = 4 * (R * R);

    if (Ci > CM){
        printf("S");
    } else if (Ci == CM){
        printf("S");
    } else {
        printf("N");
    }

    return 0;
}