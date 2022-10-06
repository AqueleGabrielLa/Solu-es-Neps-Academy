/* id do problema: 1402 */
#include <stdio.h>

int main(){

    int v[5], i, soma = 0;

    for (i = 0; i < 5; i++){
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 5; i++){
        soma = soma + v[i];
    }

    if (soma >= 40){
        printf("Carga de horas completa");
    } else {
        printf("Carga de horas incompleta");
    }

    return 0;
}