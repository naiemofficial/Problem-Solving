#include <iostream>
using namespace std;

int main() {
    int t; cin >> t; while(t--){
        int n, m, k; cin >> n >> m >> k;
        double max = (n+m-1)/m;
        if (max + k >= n) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
