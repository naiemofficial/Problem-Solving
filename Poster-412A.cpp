#include <iostream>
using namespace std;

int main(){
    int n, a; string s;
    cin >> n >> a;
    cin >> s;

    int start = 1, move = 0;
    if(a > 1){
        if(a > n/2){ // Start from the right
            start = n;
            move  = n-a;
        } else {    // Start from the left
            start = 1;
            move  = a-start;
        }
    }
    
    for(int i = 0; i < move; i++){
        if(start == 1) cout << "LEFT" << endl; 
        else cout << "RIGHT" << endl; 
    }

    if(n == 1){
        cout << "PRINT" << " " << s << endl;
    } else {
        for(int i = start-1; (start == 1 && i < n); i++){
            cout << "PRINT" << " " << s[i] << endl;
            if(i < n-1) cout << "RIGHT" << endl;
        }

        for(int i = start-1; (start == n && i >= 0); i--){
            cout << "PRINT" << " " << s[i] << endl;
            if(i > 0) cout << "LEFT" << endl;
        }
    }
}