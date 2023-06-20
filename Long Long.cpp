#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, c = 0, l = 1;
        cin >> n;
        vector <int> a(n, 0);
        long long sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] != 0){
                if(a[i] < 0 &&  l > 0) c++;
                l = a[i];
                sum += abs(a[i]);
            }
        }
        cout << sum << " " << c << endl;
    }
}