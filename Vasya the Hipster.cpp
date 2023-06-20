#include <iostream>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int pair = 0, pair_d;

    if(a > b){
        pair_d = b;
        pair = (a-pair_d)/2;
    } else if(b > a){
        pair_d = a;
        pair = (b-pair_d)/2;
    } else {
        pair_d = a;
    }
    cout << pair_d << " " << pair << endl;
}