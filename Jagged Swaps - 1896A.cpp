#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n; vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << (a[0] == 1 ? "YES" : "NO") << endl;
    }
}