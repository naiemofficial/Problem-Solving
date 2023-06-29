#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    int x[n];
    unordered_map<int, int> f, cf; // freequncy and count-frequency
    for(int i = 0; i < n; i++){
        cin >> x[i];
        f[x[i]]++;
    }
    int mx = *max_element(x, x+n);
    for(int i = 1; i <= mx; i++) cf[i] = cf[i-1]+f[i];

    int q, qi, c; cin >> q;
    while(q--){
        cin >> qi;
        cout << (qi > mx ? n : cf[qi]) << endl;
    }
}