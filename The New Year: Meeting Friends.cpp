#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> x(3, 0);
    for(int i = 0; i < 3; i++) cin >> x[i];
    sort(x.begin(), x.end());
    int d = (x[2]-x[1])+(x[1]-x[0]);
    cout << d << endl;
}