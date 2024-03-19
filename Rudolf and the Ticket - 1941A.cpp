#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n, m, k; cin >> n >> m >> k;
		vector<int> b(n), c(m);
		for(int i = 0; i < n; i++) cin >> b[i];
		for(int j = 0; j < m; j++) cin >> c[j];
	
		int cnt = 0;
        for(int i = 0; i < n; i++){
		    for(int j = 0; j < m; j++){
				if((b[i]+c[j]) <= k) cnt++;
			}
		}
		cout << cnt << endl;
    }
}