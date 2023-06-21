#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        long long a, b; cin >> a >> b;
        long long ab = abs(a-b);
        long long result = ab/10;
        if(ab%10 != 0) result++;
        cout << result << endl;
    }
}