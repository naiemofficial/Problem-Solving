#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    int i = 0;
    while(i < s.size()){
        if(s[i] == '-' && s[i+1] == '-' && (i+1 < s.size())){
            cout << 2; i+=2;
        } else if(s[i] == '-' && s[i+1] == '.' && (i+1 < s.size())){
            cout << 1; i+=2;
        } else if(s[i] == '.'){
            cout << 0; i++;
        }
    }
}