/* id do problema: 2129 */
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double kh, d, c, r1, r2, resultF;

    cin >> kh >> d >> c;

    r1 = d / kh;
    
    resultF = r1 - c;
    
    if(resultF < 0){
        cout << fixed << setprecision(1) << 0.0;
        return 0;
    }
    
    cout << fixed << setprecision(1) << resultF;

    return 0;
}