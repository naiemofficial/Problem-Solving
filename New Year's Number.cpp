#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n;
        if(n >= 2020 && (n%2020 == 0 || n%2021 == 0)){
            cout << "YES" << endl;
        } else {
            bool flag = false;
            while(n > 2020){
                n -= 2021;
                if(!(n%2020)){
                    flag = true;
                    break;
                }
            }
            cout << (flag ? "YES" : "NO") << endl;
        }
    }
}