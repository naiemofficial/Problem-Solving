#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        string s; cin >> s;
        int m = s.size()/2;
        string a = s.substr(0, m);
        string b = s.substr(m, m);
        cout << ((!(s.size()%2) && a == b) ? "YES" : "NO") << endl;
    }
}