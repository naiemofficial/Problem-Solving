#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        long long int n; cin >> n;
        cout << (!(n&(n-1)) ? "NO" : "YES") << endl;
    }
}