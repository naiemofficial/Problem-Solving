#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k, c = 0; cin >> n >> k;
    vector<int> y(n, 0);
    for(int i = 0; i < n; i++){
        cin >> y[i];
        if(y[i] < 5 && 5-y[i] >= k) c++;
    }
    cout << (c >= 3 ? c/3 : 0) << endl;
}