/* id do problema: 939 */
#include <iostream>

using namespace std;

int main()
{
    int x, c = 0;
    cin >> x;
    
    for(int i = x; i > 0; i-=8) {
        c++;
    }
    
    cout << c;
    

    return 0;
}
