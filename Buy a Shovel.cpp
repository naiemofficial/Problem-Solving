#include <iostream>
using namespace std;

int main(){
    int k, r; cin >> k >> r;
    int sum = k, c = 1;
    while(!(sum%10 == 0 || (sum-r)%10 == 0)){
        c++;
        sum = k*c;
    }
    cout << c << endl;
}