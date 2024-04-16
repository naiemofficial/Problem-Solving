#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t; cin >> t; while(t--){
        int q, k; cin >> k >> q;
        vector<int> a(k+1, 0);
        for(int i = 1; i <= k; i++) cin >> a[i];
        for(int i = 1; i <= q; i++){
            int n; cin >> n;
            cout << min(a[1]-1,n ) << " ";
        }
        cout << endl;
    }
}