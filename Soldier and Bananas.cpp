#include <iostream>
using namespace std;

int main(){
    int k, n, w, tc = 0, m = 0;
    cin >> k >> n >> w;
    for(int i = 1; i <= w; i++){
        tc += i*k;
    }
    m = (tc > n) ? tc-n : 0;
    cout << m << endl;
}