#include <iostream>
using namespace std;

int main(){
    int n, A = 0, D = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A') A++;
        else if(s[i] == 'D') D++;
    }
    cout << ((A > D) ? "Anton" : (D > A) ? "Danik" : "Friendship") << endl;
    
}