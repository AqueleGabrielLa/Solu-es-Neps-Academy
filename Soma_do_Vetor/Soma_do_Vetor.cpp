/* id do problema: 326 */
#include <iostream>

using namespace std;

int soma_vetor(int N, int v[]){
	int soma = 0;
    for (int i = 0; i < N; i++){
        soma = soma + v[i];
    }
    return soma;
}

int main(){
	
	int N, i, v[100100];
	cin >> N;
	
	for(i = 0;i < N;i++){
		cin >> v[i];
    }

	cout << soma_vetor(N,v) << endl;
	
	return 0;
}