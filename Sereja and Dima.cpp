#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++) cin >> a[i];

    int mx, s = 0, d = 0;
    for(int i = 1, start = 0, end = n-1; i <= n; i++){
        mx = max(a[start], a[end]);
        if(i%2 == 0) d += mx;
        else s+= mx;

        if(mx == a[start]) start++;
        else end--;
    }
    cout << s << " " << d << endl;
}