/* id do problema: 1212 */
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double v[100000], soma, media;
    int N, i;

    cin >> N;

    for(i = 0; i < N; i++){
        cin >> v[i];
    }

    for(i = 0; i < N; i++){
        soma = soma + v[i];
    }

    media = soma / N;
    
    cout << fixed << setprecision(2) << media;

    return 0;
}