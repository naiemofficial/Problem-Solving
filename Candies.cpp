#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n, p; cin >> n;
        for(int i = 2; i < 10e9; i++){
            p = pow(2, i)-1;
            if(n%p == 0){
                cout << n/p << endl;
                break;
            }
        }
    }
}