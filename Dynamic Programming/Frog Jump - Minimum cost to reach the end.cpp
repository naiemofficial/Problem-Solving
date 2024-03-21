// Coding Ninjas - https://bit.ly/3vbpALf
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int frog(int i, vector<int> &a, vector<int> dp){
    if(i == a.size()-1) return 0;
    if(dp[i] >= 0) return dp[i];
    int left   = ((i+1) < a.size()) ? abs(a[i] - a[i+1]) + frog(i+1, a, dp) : INT_MAX;
    int right  = ((i+2) < a.size()) ? abs(a[i] - a[i+2]) + frog(i+2, a, dp) : INT_MAX;
    return dp[i] = min(left, right);
}

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n;
        vector<int> a(n), dp(n+1, -1);
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << frog(0, a, dp) << endl;
    }
}