#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int a, b, c, d; cin >> a >> b >> c >> d;
        int mx1 = max(a, b), mn1 = min(a, b);
        int mx2 = max(c, d), mn2 = min(c, d);
        cout << ((mn1 <= mx2 && mn2 <= mx1) ? "YES" : "NO") << endl;
    }
}