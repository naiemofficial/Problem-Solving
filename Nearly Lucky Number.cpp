#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int c = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '4' || s[i] == '7') c++;
    }
    cout << ((c == 4 || c == 7) ? "YES" : "NO") << endl;
}