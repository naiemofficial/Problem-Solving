#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector s(4, 0);
    int c = 0;
    for(int i = 0; i < 4; i++)
        cin >> s[i];
    sort(s.begin(), s.end());
    
    for(int i = 1; i < 4; i++)
        if(s[i] != s[i-1]) c++; 
    
    cout << 4-c-1 << endl;
}