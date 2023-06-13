#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, c = 0, mx = 1;
    cin >> n;
    vector<int> seq(n, 0);
    for(int i =0; i < n; i++){
        cin >> seq[i];
        if(seq[i-1] <= seq[i]){
            c++;
            mx = max(mx, c);
        } else {
            c = 1;
        }
    }
    cout << mx << endl;
}