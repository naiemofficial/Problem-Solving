#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, p;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(v[j] == i+1) cout << j+1 << " ";
        }
    }

}