/* id do porblema: 2160 */
#include <iostream>

using namespace std;

int main(){

    double Q, P, G, PG;

    cin >> Q >> P >> G;

    PG = G * P;

    if(PG / 1000 <= Q){
        cout << "S";
    } else {
        cout << "N";
    }

    return 0;
}