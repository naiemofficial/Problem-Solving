#include <iostream>
using namespace std;

int main(){
    string cf = "codeforces";
    int t; cin >> t; while(t--){
        char ch; cin >> ch;
        cout << (cf.find(ch) < cf.length() ? "YES" : "NO") << endl;
    }
}