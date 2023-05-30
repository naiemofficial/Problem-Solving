#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int v, center = 3;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin >> v;
            if(v == 1){
                cout << abs(i-center) + abs(j-center) << endl;
                break;
            }
        }
        if(v == 1) break;
    }
}