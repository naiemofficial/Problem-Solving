#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int s, n, x, y, kill = 0;
    cin >> s >> n;
    vector<pair<int, int>> d;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        d.push_back(make_pair(x, y));
    }

    sort(d.begin(), d.end());
    for(int i = 0; i < n; i++){
        if(s > d[i].first){
            s += d[i].second;
            kill++;
        }
    }
    cout << (kill == n ? "YES" : "NO") << endl;
}