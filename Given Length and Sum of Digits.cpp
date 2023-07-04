#include <iostream>
using namespace std;

int main(){
    int m, s, t; cin >> m >> s;
    if(s == 0){
        cout << ((m == 1) ? "0 0" : "-1 -1") << endl;
    } else {
        string a = "", b = "";
        for(int i = 0; i < m; i++){
            t = min(s, 9);
            b += t+'0';
            s -= t;
        }
        if (s > 0) cout << "-1 -1" << endl;
        else {
            for (int i = m-1; i >= 0; i--)
                a += b[i];
            int k = 0; while(a[k] == '0') k++;
            a[k]--, a[0]++;
            cout << a << " " << b;
        }
    }
}