/* problema do curso de introdução à programação do Neps Academy*/
#include <stdio.h>
int main(){
    int x, s, n;
    s = 0;
    n = 0;
    int v[10];
    for(int i=0;i<10;i++){
        scanf("%d", &v[i]);
    }
    scanf("%d", &x);
    for(int i=0;i<10;i++){
        if((*(v+i) == x)){
            s++;   
        }else{
            n++;
        }
    }
        if(s > 0){
            printf("SIM");
        }else if (n > 0){
            printf("NAO");
        }
}