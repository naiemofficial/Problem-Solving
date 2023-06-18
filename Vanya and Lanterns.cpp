#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    int n, l, d;
    cin >> n >> l;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    
    d = max(a[0], l-a[n-1])*2; // multiplied by 2 because [d] will be compared with max from a(x) and a(x) will divided by 2 to find the minimum radius between 2 lanterns  
    for(int i = 1; i < n; i++)
        d = max(d, a[i]-a[i-1]); // max distance between a(x) lanterns

    cout << fixed << setprecision(10) << (double)d/2 << endl;
}