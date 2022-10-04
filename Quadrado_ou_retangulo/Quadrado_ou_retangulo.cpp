/* id do problema: 758 */
#include <iostream>

using namespace std;

int main(){

    int N1, N2;

    cin >> N1 >> N2;

    if (N1 == N2){
        cout << N1 * 4 << endl << "Quadrado";
    } else {
        cout << (N1 * 2) + (N2 * 2) << endl << "Retangulo";
    }

    return 0;
}