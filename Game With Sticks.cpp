#include <iostream>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int mn = min(n, m);
    cout << (mn%2 == 0 ? "Malvika" : "Akshat") << endl;
}