#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n;
        vector<int> a(n);
        int sum = 0;
        for(int i = 0; i < n; i++) cin >> a[i]; 
        sort(a.begin(), a.end());
        cout << (2*(a[n-1]-a[0])) + (2*(a[n-2]-a[1])) << endl;
    }
}