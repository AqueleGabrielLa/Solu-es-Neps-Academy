/* id do problema: 362 */
#include <iostream>

using namespace std;

int main(){
    int A1, D1, A2, D2, result;

    cin >> A1 >> D1 >> A2 >> D2;

    if (A1 != D2 && A2 != D1){
        result = 0;
    } else if (A1 == D2 && A2 == D1){
        result = 0;
    } else if (A1 != D2 && A2 == D1){
        result = 1;
    } else if (A2 != D1 && A1 == D2){
        result = 2;
    }

    if (result == 0){
        cout << "-1";
    } else if (result == 1){
        cout << "1";
    } else if (result == 2){
        cout << "2";
    }

    return 0;
}