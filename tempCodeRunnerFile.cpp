#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> a(4, vector<int>(2));
    
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 2; ++j)
            cin >> a[i][j];
    
    vector<int> x;
    for (int i = 0; i < 4; ++i)
        x.push_back(a[i][0]);

    int dx = *max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end());
    cout << dx * dx << endl;

    return 0;
}
