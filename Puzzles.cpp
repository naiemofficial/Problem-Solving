#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m, in;
    cin >> n >> m;
    vector<int> f(m, 0);
    for(int i = 0; i < m; i++)
        cin >> f[i];
    sort(f.begin(), f.end());
    int differ = f[n-1]-f[0];
    for(int i = 1; i <= m-n; i++){
        if(f[i+n-1]-f[i] < differ){
            differ = abs(f[i+n-1]-f[i]);
        }
    }
    cout << differ << endl;
}