/* id do problema: 514 */
#include <iostream>

using namespace std;

int main(){
    int cg, ce, cs, fg, fe, fs;
    int cal1, cal2;

    cin >> cg >> ce >> cs >> fg >> fe >> fs;

    cal1 = (cg * 3) + ce;
    cal2 = (fg * 3) + fe;

    if(cal1 > cal2){
        cout << "C";
        return 0;
    } else if(cal2 > cal1){
        cout << "F";
        return 0;
    }

    if(cs > fs){
        cout << "C";
    } else if(fs > cs){
        cout << "F";
    } else {
        cout << "=";
    }
    
    return 0;
}