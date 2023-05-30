#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int c = 0;
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] == s[i+1]) c++;
    }
    cout << (((s.size()-c)%2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
}