#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int A[n], sum[n-k], s = 0;
    k -= 1;
    for(int i = 0; i < n; i++){
        cin >> A[i];
        s += A[i];
        if(i >= k){
            if(i > k) s = s-A[i-(k+1)];
            sum[i-k] = s;
        }
    }
    cout << (min_element(sum, sum+(n-k))-sum)+1 << endl;
}