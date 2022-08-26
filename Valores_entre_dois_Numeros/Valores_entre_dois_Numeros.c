/* problema do curso de introdução à informática do Neps Academy */
#include <stdio.h> 
 
int main(){ 
  int A, B, i; 
  scanf("%d %d", &A, &B); 
  if(A < B){ 
    i = A; 
    for (i=A; i<=B; i++){  
      printf("%d ",i); 
    } 
  }else{  
    for (i=B; i<=A; i++){  
      printf("%d ",i);  
    }  
  }  
}

