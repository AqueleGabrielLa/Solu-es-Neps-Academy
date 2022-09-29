/*Problema da Olímpiada Brasileira de Informática(2015), id do problema no Neps: 47 */
#include <iostream>

using namespace std;

int main(){
    int N, soma, i, v[10000];
	
	cin >> N;
	
	for (i = 0; i < 10000; i++){
	    v[i] = 5;
	}
	
	for (i = 0; i < N; i++){
	    cin >> v[i];
	}
	
	soma = 0;
	for (i = 0; i < N; i++){
	   if (v[i] == 1 && v[i + 1] == 0 && v[i + 2] == 0){
	        soma++; 
	   } 
	}
	
	cout << soma;
	
	return 0;
}