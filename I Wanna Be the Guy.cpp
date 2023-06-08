#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, x, y;
    cin >> n;
    cin >> x;
    vector<int> p(x, 0);
    for(int i = 0; i < x; i++)
        cin >> p[i];

    cin >> y;
    vector<int> q(y, 0);
    for(int i = 0; i < y; i++)
        cin >> q[i];

    vector<int> pq(x+y, 0);
    merge(p.begin(), p.end(), q.begin(), q.end(), pq.begin());
    sort(pq.begin(), pq.end());
    int level = 0;
    for(int i = 0; i < pq.size(); i++)
        if(pq[i] == level+1) level++;

    if(level >= n){
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
}