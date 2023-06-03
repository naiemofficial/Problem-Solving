#include <iostream>
using namespace std;

int main(){
    int n, h, ih, nh_sum = 0;
    cin >> n >> h;
    for(int i = 0; i < n; i++){
        cin >> ih;
        nh_sum += (ih > h) ? 2 : 1;
    }
    cout << nh_sum << endl;
}