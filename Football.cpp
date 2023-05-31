#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int c = 1;
    for(int i = 0; i < s.size()-1; i++){
        if(i > 0 && s[i] != s[i-1]) c = 1;
        if(s[i] == s[i+1]) c++;
        if(c >= 7) break;
    }
    cout << ((c >= 7) ? "YES" : "NO") << endl;
}