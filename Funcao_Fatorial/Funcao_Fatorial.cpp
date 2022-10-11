/* id do problema: 174 */
#include <iostream>

using namespace std;

int main(){

    int N, i, cal = 0;

    cin >> N;

    for(i = N - 1; i >= 1; i--){
        cal = N * (N * i);
    }

    cout << cal;

    return 0;
}