#include <iostream>
using namespace std;

int main(){
    int chval = 48;
    int t; cin >> t; while(t--){
        string s; cin >> s;
        int a = (s[0]-chval) + (s[1]-chval) + (s[2]-chval);
        int b = (s[3]-chval) + (s[4]-chval) + (s[5]-chval);
        cout << (a == b ? "YES" : "NO") << endl;
    }
}