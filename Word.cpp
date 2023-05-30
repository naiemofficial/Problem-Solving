#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int l = 0, u = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') l++;
        else if(s[i] >= 'A' && s[i] <= 'Z') u++;
    }
    transform(s.begin(), s.end(), s.begin(), (l >= u) ? ::tolower : ::toupper);
    cout << s << endl;
}