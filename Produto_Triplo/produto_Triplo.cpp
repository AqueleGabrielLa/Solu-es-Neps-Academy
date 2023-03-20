/* id do problema: 676 */
#include <iostream>
#include <vector>

using namespace std;

int main(){

    long long int N, x, cal;
    vector <long long int> v;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> x;
        v.push_back(x);
    }

    cal = v[v.size()-1] * v[v.size()-2] * v[v.size()-3]; 

    cout << cal;

    return 0;
}