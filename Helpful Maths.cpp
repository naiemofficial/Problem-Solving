#include <iostream>
using namespace std;

int main(){
    string s = "1+1+3+1+3";
    cin >> s;
    for(int x = 0; x < s.size(); x++){
        for(int y = 0; y < s.size()-1; y++){
            if(s[y] != '+' && s[y] > s[y+2])
                swap(s[y], s[y+2]);
        }
    }
    cout << s << endl;
}