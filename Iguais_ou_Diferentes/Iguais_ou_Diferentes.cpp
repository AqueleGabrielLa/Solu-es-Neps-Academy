/* id do problema: 745 */
#include <iostream>

using namespace std;

int main(){
    int N1, N2;

    cin >> N1 >> N2;

    if(N1 == N2){
        cout << "Iguais";
    } else if (N1 != N2){
        cout << "Diferentes";
    }

    return 0;
}