#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
typedef long long int ll; 

int main(){
    ll n, mx = 0; cin >> n;
    vector<ll> A(n, 0);
    unordered_map<ll, ll> count, dp;
    for(int i = 0; i < n; i++){
        cin >> A[i];
        mx = max(mx, A[i]), count[A[i]]++;
    }
    dp[1] = count[1];
    for(int i = 2; i <= mx; i++)
        dp[i] = max(dp[i-1], dp[i-2]+(i*count[i]));

    cout << dp[mx] << endl;
}