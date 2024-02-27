#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n;
        int num, sum = 0;
        for(int i = 0; i < n; i++){
            cin >> num;
            sum += abs(num);
        }
        cout << sum << endl;
    }
}