#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        long long int x, y, n, c = 0; cin >> x >> y >> n;
        int k = n;
        if(k%x != y) k -= k%x;
        while(true){
            if((k+y)%x == y && k+y < n){
                cout << k+y << endl;
                break;
            } else if(k%x == y){
                cout << k << endl;
                break;
            } else {
                k = k-x;
            }
        }
    }
}