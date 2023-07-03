#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int i = !(n%2) ? n/2 : (n-3)/2;
    cout << (!(n%2) ? i : i+1) << endl;
    while(i--) cout << 2 << " ";
    if(n%2) cout << 3;
}