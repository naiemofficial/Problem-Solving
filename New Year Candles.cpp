#include <iostream>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int x = a;
    while(a >= b) x += a/b, a = (a/b)+(a%b);
    cout << x << endl;
}