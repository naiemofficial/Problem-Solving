#include <iostream>
using namespace std;

int main(){
    char ch;
    int n, m, i, c = 0;
    cin >> n >> m;
    for(i = 1; i <= (n*m); i++) {
        cin >> ch;
        if(ch == 'B' || ch == 'W' || ch == 'G') c++;
    }
    cout << (c == (n*m) ? "#Black&White\n" : "#Color\n") << endl;
}