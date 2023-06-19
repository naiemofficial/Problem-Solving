#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e6;

int f[N+1];
vector<ll> p;

void solve() {
	ll n;
	cin >> n;
	int r = p.size()-1, l = 0;
	while(l < r) {
		int m = ( l + r ) / 2;
		if(p[m] * p[m] < n) {
			l = m+1;
		} else {
			r = m;
		}
	}
	if(p[l] * p[l] == n) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int T = 1;
	
	cin >> T;
	for(int i = 2; i <= N; i++) {
		if(!f[i]) {
			p.push_back(i);
		}
		for(int j = i; j <= N; j += i) {
			f[j] = 1;
		}
	}
	while(T--){
		solve();
	}
	return 0;
}

  	    		 	   	 		   	 	 		 			