#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n;
        int A[n];
        for(int i = 0; i < n; i++) cin >> A[i];
        int max = *max_element(A, A+n);
        int min = *min_element(A, A+n);
        cout << (max-min) << endl;
    }
}