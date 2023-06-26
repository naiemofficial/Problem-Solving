#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        string a = "", b; cin >> b;
        a += b[0];
        for(int i = 1; i < b.size(); i++){
            if(i%2 == 0) a += b[i];  
        }
        a += b[b.size()-1];
        cout << a << endl;
    }
}