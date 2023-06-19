#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#define limit 1000000

bool isSquare(long long val){
    int temp = sqrt(val);
    return (pow(temp, 2) == val ? true : false); 
}

int main(){
    vector<bool> v(limit+1, false);
    for(int i = 2; i <= limit ; i++)
        for(int j = 2; i*j <= limit; j++)
            v[i*j] = true;

    int n; long long t;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        cout << (t != 1 && (isSquare(t) && !v[sqrt(t)]) ? "YES" : "NO") << endl;
    }
}