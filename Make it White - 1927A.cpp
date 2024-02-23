#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int x = 0, y = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                if(x == 0) x = 1;
                else {
                    x += y;
                    y = 0;
                }
            }
            if(x > 0) y++;
        }
        cout << x << endl;
    }
}