/* id do problema: 177 */
#include <iostream>

using namespace std;

int main(){
    int N, p, ptotal;
    double p1 = 6.90; 
    double p2 = 7.30; 
    double p3 = 4.50; 
    double p4 = 5.70;

    cin >> p >> N;

    for (int i = 0; i < N; i++){
        if (p == 1){
            ptotal = p1 * N; 
        } else if (p == 2){
            ptotal = p2 * N;
        } else if (p == 3){
            ptotal = p3 * N;
        } else if (p == 4){
            ptotal = p4 * N;
        }
    }

    cout << "O valor total da compra e R$ " << ptotal;

    return 0;
}