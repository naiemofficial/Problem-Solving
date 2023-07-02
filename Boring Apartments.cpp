#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int x; cin >> x;
        int call_sum = ((x%10)-1)*10;
        int x_sum = 0;
        if(x/1000) x_sum += 4;
        if(x/100) x_sum += 3;
        if(x/10) x_sum += 2;
        if(x%10) x_sum += 1;
        cout << (call_sum+x_sum) << endl;
    }
}