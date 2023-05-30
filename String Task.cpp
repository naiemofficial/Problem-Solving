#include <iostream>
using namespace std;
int is_vowel(char ch){
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') ? true : false;
}
int main(){
    string s, ns = "";
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(!is_vowel(tolower(s[i]))){
            ns += ".";
            ns += tolower(s[i]);
        }
    }
    cout << ns << endl;
}