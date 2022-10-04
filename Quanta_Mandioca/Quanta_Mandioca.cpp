/* id do problema: 1797 */
#include <iostream>

using namespace std;

int main(){

    int c, bo1, bo2, m, i;

    int cur = 300;
    int boi = 1500;
    int bot = 600;
    int map = 1000;
    int iar = 150;
    int veia = 225;

    cin >> c >> bo1 >> bo2 >> m >> i;

    cout << (c * cur) + (bo1 * boi) + (bo2 * bot) + (m * map) + (i * iar) + veia;

    return 0;
}