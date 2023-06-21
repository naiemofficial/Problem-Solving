#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> x(4, 0);
    for(int i = 0; i < 4; i++)
        cin >> x[i];
    sort(x.begin(), x.end());
    int c = x[3]-x[0];
    int b = x[2]-c;
    int a = x[3]-(b+c);
    cout << a << " " << b << " " << c << endl;
}