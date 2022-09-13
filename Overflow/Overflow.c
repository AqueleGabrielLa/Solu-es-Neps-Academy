/* id do problema: 225 */
#include <stdio.h>
int main(){
    int N, P, S, op;
    char C;

    scanf("%d", &N);
    scanf("%d %c %d", &P, &C, &S);
    
    if(C == '+'){
        op = P + S;
    } else if(C == '*'){
        op = P * S;
    }
    
    if (op > N){
        printf("OVERFLOW");
    } else {
        printf("OK");
    }

    return 0; 
}