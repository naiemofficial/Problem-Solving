#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, c = 1; string s;
    cin >> n;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), std::towlower);
    sort(s.begin(), s.end());
    for(int i = 1; i < n; i++)
        if(s[i-1] != s[i]) c++;

    cout << ((c >= 26) ? "YES" : "NO") << endl;
}