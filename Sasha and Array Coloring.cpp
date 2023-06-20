#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, sum = 0;
        cin >> n;
        vector<int> a(n, 0), c1, c2;
        for(int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        for(int i = 0; i < n/2; i++)
            sum += abs(a[i]-a[n-i-1]);
        cout << sum << endl;
    }
}