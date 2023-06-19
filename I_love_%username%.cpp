#include <iostream>
using namespace std;

int main(){
    int n, val, best, worst, c = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> val;
        if(i == 0) best = worst = val;
        if(val > best){
            best = val;
            c++;
        } else if(val < worst){
            worst = val;
            c++;
        }
    }
    cout << c << endl;
}