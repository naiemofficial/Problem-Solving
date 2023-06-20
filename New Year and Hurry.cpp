#include <iostream>
using namespace std;

int main(){
    int n, k, time = 0, c = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        time += 5*i;
        if(time+k > 240) break;
        else c++;
    }
    cout << c << endl;
}