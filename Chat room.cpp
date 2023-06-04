#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int c = 1;
    for(int i = 0; i < s.size(); i++){
        if((c == 1 && s[i] == 'h') || (c == 2 && s[i] == 'e') || ((c == 3 || c == 4) && s[i] == 'l') || (c == 5 && s[i] == 'o'))
            c++;
    }
    cout << ((c >= 6) ? "YES" : "NO") << endl;
}