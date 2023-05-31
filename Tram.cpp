#include <iostream>
using namespace std;

int main(){
    int n, exit, enter, loads = 0, capacity = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> exit >> enter;
        loads -= exit;
        loads += enter;
        if(loads > capacity) capacity = loads;
    }
    cout << capacity << endl;
}