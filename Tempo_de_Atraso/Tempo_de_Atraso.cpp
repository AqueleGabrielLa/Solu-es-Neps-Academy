#include <iostream>

using namespace std;

int main(){

    int H1, M1, H2, M2, cal1, cal2, sobra;

    cin >> H1 >> M1 >> H2 >> M2;

    cal1 = (H1 * 60) + M1 + 45;

    cal2 = (H2 * 60) + M2;
    sobra = cal2 - cal1;

    if(cal1 <= cal2){
        cout << "Sucesso";
        return 0;
    } else {
        cout << "Atrasado " <<  sobra - sobra - sobra;
    }

    return 0;
}