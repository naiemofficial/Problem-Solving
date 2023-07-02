#include <iostream>
using namespace std;

int main(){
    string p[6] = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int y, w; cin >> y >> w;
    int d = max(y, w);
    cout << p[d-1] << endl;
}