#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        long long int n, k; cin >> n >> k;
        long long int d = k/(n-1), m = k%(n-1);
        cout << (m == 0 ? ((n*d)+m)-1 : (n*d)+m) << endl;
    }
}