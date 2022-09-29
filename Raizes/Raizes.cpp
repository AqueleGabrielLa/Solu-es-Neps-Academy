/* id do problema: 170 */
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int X, i;
    double N[10000];
    
    cin >> X;
    
    for (i = 0; i < X; i++){
        cin >> N[i];
    }
    
    for(i = 0;i < X; i++){
        std::cout.precision(4);
        std::cout << std::fixed << sqrt(N[i]) << endl;
    }
    
    return 0;
}