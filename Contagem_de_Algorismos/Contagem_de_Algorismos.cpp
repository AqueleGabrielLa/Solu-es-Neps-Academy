/* id do problema: 189 */
#include <iostream>

using namespace std;

int main(){
    int N, i;
    string S;
    int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;
    
    cin >> N;
    
    for(i = 0; i < N; i++){
        cin >> S;
        
        if(S == "teste"){
            cout << "hsfdahds";
        }

        for(int j = 0; j < S.size(); j++){
            if(S[j] == '0'){
                c0++;
            } else if(S[j] == '1'){
                c1++;
            } else if(S[j] == '2'){
                c2++;
            } else if(S[j] == '3'){
                c3++;
            } else if(S[j] == '4'){
                c4++; 
            } else if(S[j] == '5'){
                c5++;
            } else if(S[j] == '6'){
                c6++;
            } else if(S[j] == '7'){
                c7++;
            } else if(S[j] == '8'){
                c8++;
            } else if(S[j] == '9'){
                c9++;
            }
        }
    }
    
    cout << "0 - " << c0 << endl;
    cout << "1 - " << c1 << endl;
    cout << "2 - " << c2 << endl;
    cout << "3 - " << c3 << endl;
    cout << "4 - " << c4 << endl;
    cout << "5 - " << c5 << endl;
    cout << "6 - " << c6 << endl;
    cout << "7 - " << c7 << endl;
    cout << "8 - " << c8 << endl;
    cout << "9 - " << c9 << endl;
    
    return 0;
}