#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(3, 0);
    for(int i = 0; i < 3; i++)
        cin >> v[i];

    int a, b, c, d, e;
    a = v[0]+v[1]+v[2];
    b = v[0]+v[1]*v[2];
    c = v[0]*(v[1]+v[2]);
    d = v[0]*v[1]*v[2];
    e = (v[0]+v[1])*v[2];

    cout << max(max(max(max(a, b), c), d), e) << endl;
}