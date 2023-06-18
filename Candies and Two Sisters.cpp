#include <iostream>
using namespace std;

int main(){
    int t, n, c = 0;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        cout << ((n == 1 || n == 2) ? 0 : (n-1)/2) << endl;
    }
}