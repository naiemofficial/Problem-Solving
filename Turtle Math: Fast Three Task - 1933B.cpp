#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n;
        vector <int> a(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        int count = -1;
        if(sum%3 == 0) count = 0;
        else if(sum%3 == 2) count = 1;
        else for(int num:a) if((sum-num)%3 == 0) count = 1;

        if(count < 0) count = 2;
        cout << count << endl;
    }
}