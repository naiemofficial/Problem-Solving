#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m, c = 1;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < n-1; i++)
        if(v[i] != v[i+1]) c++;

    cout << c << endl;
}