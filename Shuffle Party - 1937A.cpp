#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        long long n, p = 1; cin >> n;
        while (p * 2 <= n) p <<= 1;
        cout << p << endl;
    }
}