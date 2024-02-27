#include <iostream>
#include <cmath>
#include <unordered_set>
#define ll long long
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        ll a, b, l; cin >> a >> b >> l;
        unordered_set <ll> set;
        for(ll x = 0; pow(a, x) <= l; x++){
            for(ll y = 0; pow(b, y) <= l; y++){
                ll s = pow(a, x)*pow(b, y);
                if(l%s == 0) set.insert(l/s);
            };
        };
        cout << set.size() << endl;
    }
}