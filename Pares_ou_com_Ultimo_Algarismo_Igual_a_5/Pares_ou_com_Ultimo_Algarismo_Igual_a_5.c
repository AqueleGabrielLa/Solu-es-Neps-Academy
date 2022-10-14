/* id do problema: 177 */
#include <stdio.h>

int main(){
    int N1, N2, N3, v[3];

    scanf("%d%d%d", &N1, &N2, &N3);

    v[0] = N1;
    v[1] = N2;
    v[2] = N3;

    int c = 0;
    for(int i = 0; i < 3; i++){
        if(v[i] % 2 == 0 || v[i] % 5 == 0){
            c++;
        }
    }

    printf("%d", c);

    return 0;
}