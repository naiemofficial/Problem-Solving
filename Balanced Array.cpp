#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n, sum_e = 0, sum_o = 0; cin >> n;
        vector<int> A(n, 0);
        for(int i = 0; i < n; i++){
            if(i < n/2){
                sum_e += A[i] = (i == 0 ? 2 : A[i-1]+2);
            } else{
                sum_o += A[i] = (i == n/2 ? 1 : A[i-1]+2);
            }
        }
        if(sum_e != sum_o) A[n-1] += sum_e-sum_o;
        if(A[n-1]%2 == 0){
            cout << "NO" << endl;
        } else{
            cout << "YES" << endl;
            for(int i:A) cout << i << " ";
        }
    }
}