#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n;
        int S[n]; for(int i = 0; i < n; i++) cin >> S[i];
        sort(S, S+n, greater<int>());
        int m = 1001;
        for(int i = 0; i < n-1; i++){
            m = min(m, abs(S[i]-S[i+1]));
        }
        cout << m << endl;
    }
}