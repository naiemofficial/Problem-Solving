#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, h = 0, e = 0;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 0) e++;
        else if(v[i] == 1) h++;
    }
    cout << ((e == h || h == 0) ? "EASY" : "HARD") << endl;
}