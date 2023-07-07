#include <iostream>
using namespace std;

int main(){
    int n, cubes = 0, c = 0; cin >> n;
    for(int i = 1; cubes <= n; i++){
        cubes = ((i*i)+i)/2;
        if(cubes > n) break;
        n = n-cubes;
        c++;
    }
    cout << c << endl;
}