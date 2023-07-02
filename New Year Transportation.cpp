#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int, vector<int>> G;
vector<bool> visited(10e4+1);
void DFS(int m){
    visited[m] = true;
    for(int i = 0; i < G[m].size(); i++){
        int next = G[m][i];
        if(!visited[next]) DFS(G[m][i]);
    }
}

int main(){
    int n, t, in; cin >> n >> t;
    for(int i = 1; i < n; i++){
        cin >> in;
        G[i].push_back(i+in);
    }
    DFS(1);
    cout << ((visited[t]) ? "YES" : "NO") << endl;
}