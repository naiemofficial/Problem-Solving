#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n;
        int x2 = n*2;
        for(int i = 1; i <= x2; i++){
            int x = 1;
            for(int j = 1; j <= x2; j++){
                if(i%4 == 1 || i%4 == 2){
                    if(j%4 == 1 || j%4 == 2){
                        cout << "#";
                    } else if(j%4 == 3 || j%4 == 0){
                        cout << ".";
                    }
                } else if(i%4 == 3 || i%4 == 0){
                    if(j%4 == 1 || j%4 == 2){
                        cout << ".";
                    } else if(j%4 == 3 || j%4 == 0){
                        cout << "#";
                    }
                }
                
            }
            cout << endl;
        }
    }
}