#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n, odd = 0, even = 0; cin >> n;
        int A[n];
        for(int i = 0; i < n; i++){
            cin >> A[i];
            if(i%2 != A[i]%2){
                if(A[i]%2 == 0) even++;
                else odd++;
            }
        }
        cout << (odd != even ? -1 : even) << endl;
    }
}