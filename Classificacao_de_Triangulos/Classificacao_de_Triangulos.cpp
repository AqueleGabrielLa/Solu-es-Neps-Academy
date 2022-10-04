/* id do problema: 663 */
#include <iostream>

using namespace std;

int main(){
    int criteTri, N, A, B, C;

    cin >> A >> B >> C;

    if (A < B + C && B < C + A && C < A + B){
        criteTri = true;
    }

    if (criteTri == true){
        if(A == B && B == C){
            cout << "S" << endl;
            cout << "3";
        } else if (A != B && B != C){
            cout << "S" << endl;
            cout << "2";
        } else {
            cout << "S" << endl;
            cout << "1";
        }
    } else if (criteTri != true){
        cout << "N";
    }

    return 0;
}