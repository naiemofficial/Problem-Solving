#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        long n, sum = 0, k;
        cin >> n;
        vector <int> a(n, 0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        k = sum/n;
        
        bool flag = false;
        for(int i = 0; i < n; i++){
            if(a[i] < k){
                flag = true;
                break;
            }
            a[i+1] += a[i]-k;
            a[i] = k;
        }
        cout << (!flag ? "YES" : "NO") << endl;
    }
}