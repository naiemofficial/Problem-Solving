#include <iostream>
#include <math.h>
using namespace std;

bool isSquare(int x){
    return (pow((int)sqrt(x), 2) == x);
}

int main(){
    int n; cin >> n;
    int count = 0;
    for(int a = 1; a <= n; a++){
        for(int b = a; b <= n; b++){
            int ab = pow(a, 2) + pow(b, 2);
            if(isSquare(ab) && sqrt(ab) <= n){
                count++;
            }
        }
    }
    cout << count << endl;
}