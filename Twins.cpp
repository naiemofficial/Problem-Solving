#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, sum = 0, mycoins = 0, c = 0;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    sort(v.rbegin(), v.rend());
    for(int i = 0; i < n; i++){
        mycoins += v[i];
        c++;
        if(mycoins > sum/2) break;
    }
    cout << c << endl;
    
}