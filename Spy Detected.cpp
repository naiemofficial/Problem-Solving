#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; ciit n >> t; while(t--){
        int n; cin >> n;
        vector<int> a(n, 0);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            if((i > 0 && i < n && a[i] != a[i+1] && a[i+1] == a[i-1]) ||
               (i == 0 && a[i] != a[i+1] && a[i+1] == a[i+2])        || 
               (i == n-1 && a[i] != a[i-1] && a[i-1] == a[i-2])){
                cout << i+1 << endl;
                break;
            }
        }
    }
}