#include <iostream>
using namespace std;

int main(){
    long long n, m, a, x, y;
    cin >> n >> m >> a;
    x = (n%a == 0) ? n/a : (n/a)+1;
    y = (m%a == 0) ? m/a : (m/a)+1;
    cout << x*y << endl;
}