#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int a, b; cin >> a >> b;
        int sq = max(a, b);
        if(!sq%2) sq++;
        int m = min(a, b);
        if(m*2 > sq) sq = m*2;
        cout << sq*sq << endl;
    }
}