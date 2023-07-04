#include <iostream>
using namespace std;

int main(){
    int n, m, i; cin >> n >> m;
    for(i = n+1; i <= m; i++){
        bool prime = true;
        for(int j = 2; j < i; j++){
            if(i%j == 0){
                prime = false; break;
            }
        }
        if(prime) break;
    }
    cout << (i == m ? "YES" : "NO") << endl;
}