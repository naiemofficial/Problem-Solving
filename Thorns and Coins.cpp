#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n;
        string path; cin >> path;

        int coin = 0, thorn = 0;
        for(int i = 1; i < n; i++){
            if(thorn < 2){
                if(path[i] == '@' || path[i] == '.'){
                    if(path[i] == '@') coin++;
                    thorn = 0;
                } else {
                    thorn++;
                }
            } else {
                break;
            }
        }
        cout << coin << endl;
    }
}