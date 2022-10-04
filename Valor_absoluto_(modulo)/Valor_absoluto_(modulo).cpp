/* id do problema: 755 */
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N;

    cin >> N;

    if(N < 0){
        cout << fabs(N);
    } else if (N == 0){
        cout << N;
    } else if(N > 0){
        cout << N;
    }

    return 0;
}