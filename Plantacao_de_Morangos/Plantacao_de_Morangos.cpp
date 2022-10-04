/* id do problema: 53 */
#include <iostream>

using namespace std;

int main(){
    int b1, h1, b2, h2, area1, area2;

    cin >> b1 >> h1 >> b2 >> h2;

    area1 = b1 * h1;
    area2 = b2 * h2;

    if (area1 >= area2){
        cout << area1;
    } else if (area2 >= area1){
        cout << area2;
    }

    return 0;
}