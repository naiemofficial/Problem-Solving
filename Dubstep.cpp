#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int i = 0;
    string word = "";
    while(i < s.length()){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i += 3;
            if(word.length() > 0){
                cout << word << " ";
                word = "";
            }
        } else {
            word += s[i];
            i++;
        }
    }
    if(word.length()) cout << word << " ";
}