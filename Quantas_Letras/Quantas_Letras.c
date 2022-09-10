/* problema do curso de introdução à informática do Neps Academy */
#include <stdio.h>
#include <string.h>
int main(){
    char S[1000], l;
    int quant = 0;

    fgets(S, sizeof(S), stdin);

    scanf("%c", &l);

    for (int i = 0; S[i] != '\0'; i++) {
        if (l == S[i])
            quant++;
    }

    printf("%d", quant);
    
    return 0;
}