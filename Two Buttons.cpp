#include <iostream>
using namespace std;

int main(){
    int n, m, c = 0; cin >> n >> m;
    while(n != m){
        c++;
        m = (n > m || m%2 != 0) ? m+1 : m/2;
    }
    cout << c << endl;
}