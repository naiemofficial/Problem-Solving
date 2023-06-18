#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    for(int r = 1; r <= n; r++){
        for(int c = 1; c <= m; c++){
            if(r == 1 || r == n || r%2 != 0){
                cout << "#";
            } else {
                if((r/2)%2 == 0){
                    if(c == 1) cout << "#";
                    else cout << ".";
                } else {
                    if(c == m) cout << "#";
                    else cout << ".";
                }
            }
        }
        cout << endl;
    }
}