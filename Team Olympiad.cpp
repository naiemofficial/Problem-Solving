#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;

int main(){
    unordered_map<int, stack<int>> hash;
    int n, in; cin >> n;
    for(int i=1; i <= n; i++){
        cin >> in;
        hash[in].push(i);
    }
    int t = min(min(hash[1].size(), hash[2].size()), hash[3].size());
    cout << t << endl;
    for(int i=0; i < t; i++){
        cout << hash[1].top() << " ";
        cout << hash[2].top() << " ";
        cout << hash[3].top() << " " << endl;
        hash[1].pop(); hash[2].pop(); hash[3].pop();
    }
}