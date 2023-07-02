#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n, k; cin >> n >> k;
        int A[n], B[n], sum = 0;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            sum += A[i];
        }
        for(int i = 0; i < n; i++) cin >> B[i];

        sort(A, A+n);
        sort(B, B+n, greater<int>());
        for(int i = 0; i < k; i++){
            if(A[i] < B[i]) sum = (sum-A[i])+B[i];
        }
        cout << sum << endl;
    }
}