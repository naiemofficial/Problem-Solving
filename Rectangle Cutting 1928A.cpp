#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int x, y; cin >> x >> y;

        bool yes = true;
        bool x_mod = (x%2 == 0), y_mod = (y%2 == 0);
        if((x == 1 && y == 1) || ((!x_mod && !y_mod)) || (!y_mod && x/2 == y) || (!x_mod && y/2 == x)){
            yes = false;
        }

        cout << (yes ? "Yes" : "No") << endl;
    }
}