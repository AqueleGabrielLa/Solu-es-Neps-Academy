/* id do problema: 103 */
#include <iostream>

using namespace std;

int main(){
    int x, y, z, ix, iy, iz, c = 0;

    cin >> x >> y >> z;
    cin >> ix >> iy >> iz;

    if(ix > x){
        for(int i = x; i < ix; i++){
            c++;
        }
    }

    if(iy > y){
        for(int i = y; i < iy; i++){
            c++;
        }
    }

    if(iz > z){
        for(int i = z; i < iz; i++){
            c++;
        }
    }

    cout << c;

    return 0;
}