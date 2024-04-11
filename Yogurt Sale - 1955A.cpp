#include <iostream>
using namespace std;
 
int main() {
    int t; cin >> t; while(t--){
        long long n, a, b; cin >> n >> a >> b;
        long long ans = n * a;
        if (b < 2 * a) {
            ans = (n / 2) * b + (n % 2) * a;
        }
        cout << ans << endl;
    }
}