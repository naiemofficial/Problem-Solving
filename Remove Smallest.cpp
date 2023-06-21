#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n;
        vector<int> a(n, 0);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        bool flag = false;
        for(int i = 0; i < n-1; i++)
            if(a[i+1]-a[i] > 1){
                flag = true;
                break;
            }
        
        cout << (!flag ? "YES" : "NO") << endl;
    }
}