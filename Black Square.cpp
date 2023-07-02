#include <iostream>
using namespace std;

int main(){
    int A[4]; cin >> A[0] >> A[1] >> A[2] >> A[3];
    string s; cin >> s;
    int chval = 48, sum = 0;
    for(int i = 0; i < s.size(); i++){
        int ch = s[i]-chval;
        sum += A[ch-1];
    }
    cout << sum << endl;
}