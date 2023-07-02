#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n;
        int a = (n%3 == 1) ? 1 : 0;
        int b = (n%3 == 2) ? 2 : 0;
        int c = n/3;
        cout << c+a << " "<< c+(b/2) << endl;
    }
}