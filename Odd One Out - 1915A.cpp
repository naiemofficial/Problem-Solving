#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int a, b, c; cin >> a >> b >> c;
        if(b == c){
            cout << a << endl;
        } else if(c == a){
            cout << b << endl;
        } else {
            cout << c << endl;
        }
    }
}