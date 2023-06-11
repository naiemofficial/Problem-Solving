#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main(){
    int n, min = INT_MAX, max = INT_MIN, x = -1, y = -1;
    cin >> n;
    vector v(n, 0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] > max){
            max = v[i];
            x = i;
        }
        if(v[i] <= min){
            min = v[i];
            y = i;
        }
    }
    int s = (n-1)+(x-y);
    cout << ((x > y) ? --s : s) << endl;
}