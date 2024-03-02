#include <iostream>
#include <cmath>
using namespace std;

bool isSquare(long long x){
    return (pow((long long)sqrt(x), 2) == x);
}

int main(){
    long long t; cin >> t; while(t--){
        long long n; cin >> n;
        long long a, sum = 0;
        while(n--){
            cin >> a;
            sum += a;
        }
        cout << (isSquare(sum) ? "YES" : "NO") << endl;
    }
}