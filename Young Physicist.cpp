#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, v;
    cin >> n;
    vector<int> sum(3, 0);
    for(int x = 0; x < n; x++){
        for(int y = 0; y < 3; y++){
            cin >> v;
            sum[y] += v;
        }
    }

    cout << ((sum[0] == 0 && sum[1] == 0 && sum[2] == 0) ? "YES" : "NO") << endl;
}