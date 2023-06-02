#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<vector<int>> v(n);
    int elements, input;
    for(int i = 0; i < n; i++){
        cin >> elements;
        for(int j = 0; j < elements; j++){
            cin >> input;
            v[i].push_back(input);
        }
    }
    int i, j;
    for(int x = 0; x < q; x++){
        cin >> i >> j;
        cout << v[i][j] << endl;
    }
    cout << endl;
}
