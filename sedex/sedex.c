#include <stdio.h>

int main(){
	int D, A, L, P;

	scanf("%d%d%d%d", &D, &A, &L, &P);

	if(A >= D && L >= D && P >= D){
		printf("S");
		return 0;
	}

	printf("N");

	return 0;
}
