#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, v, k, c=0;
    cin >> n >> k;
    vector<int> a;
    for(int i = 0; i < n; i++){
        cin >> v;
        a.push_back(v);
    }
    for(int i = 0; i < n; i++){
        if(a[i] > 0 && a[i] >= a[k-1]) c++; 
    }
    cout << c << endl;
}