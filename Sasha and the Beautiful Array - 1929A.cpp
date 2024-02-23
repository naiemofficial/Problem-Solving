#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        long n; cin >> n;
        vector <long> a(n, 0);
        for(int i = 0; i < n; i++) cin >> a[i]; 
        sort(a.begin(), a.end());

        long sum = 0;
        for(int i = 0; i < n; i++)
            if(i > 0) sum += a[i]-a[i-1];
        cout << sum << endl;
    }
}