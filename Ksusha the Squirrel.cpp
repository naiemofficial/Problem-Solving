#include <iostream>
using namespace std;

int main(){
    int n, k; string road;
    cin >> n >> k;
    cin >> road;
    
    int rock = 0;
    for(int i = 0; i < n; i++){
        if(road[i] == '#'){
            rock++;
            if(rock >= k) break;
        } else {
            rock = 0;
        }
    }
    
    cout << (!rock ? "YES" : "NO") << endl;
}