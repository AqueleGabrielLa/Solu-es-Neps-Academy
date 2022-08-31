/* id do problema: 324 */
#include <stdio.h>
int main(){
    int N, L, C, qc;
    scanf("%d", &N);
    qc = 0;
    for(int i=0; i<N; i++){
        scanf("%d%d", &L, &C);
        if(L > C){
            qc = qc + C;
        }
    }
    printf("%d", qc);
}