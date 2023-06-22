#include <iostream>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int d_ml = k*l; int lime_pcs = c*d;
    int result = min(min((k*l)/nl, lime_pcs), p/np)/n;

    cout << result << endl;
}