/* id do problema: 902*/
#include <iostream>

using namespace std;

int main(){
    
    int N, D, M, P;
    
    cin >> N >> D >> M >> P;
    
    if (P * M > N * D){
        cout << "BUFF";
    } else if (P * M < N * D){
        cout << "NERF";
    }

    return 0;
}
