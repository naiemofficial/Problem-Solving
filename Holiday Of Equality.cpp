#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++) cin >> a[i];
    int max = *max_element(a.begin(), a.end());

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += max-a[i];
    }
    cout << sum << endl;
}