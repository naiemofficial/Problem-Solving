#include <iostream>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int i;
    for(i = 0; i < s1.size(); i++){
        if(s1[i] != s2[s2.size()-(i+1)]) break;
    }
    cout << ((i == s1.size()) ? "YES" : "NO") << endl;
}