/* problema do curso de introdução à informática do Neps Academy */
#include <stdio.h>

fib(int N){
 if(N == 0) 
      return 1;
    else
      if(N == 1)
        return 1;
    else
      return fib(N - 1) + fib(N - 2);
}


int main(){
  int N;
  scanf("%d", &N);
  printf("%d", fib(N));
}