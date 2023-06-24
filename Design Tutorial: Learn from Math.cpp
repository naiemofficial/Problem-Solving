#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    cout << ((n%2 == 0) ? to_string(4) +" "+ to_string(n-4) : to_string(9) + " " + to_string(n-9)) << endl;
}