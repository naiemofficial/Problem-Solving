#include <iostream>
using namespace std;

int main(){
    int n, t, B_to; string q;
    cin >> n >> t >> q;
    for(int i = 0; i < t; i++){
        B_to = -1;
        for(int j = 0; j < n-1; j++){
            if(q[j] == 'B' && q[j+1] == 'G' && B_to != j){
                char swap = q[j];
                q[j] = q[j+1];
                q[j+1] = swap;
                B_to = j+1;
            }
        }
    }
    cout << q << endl;
}