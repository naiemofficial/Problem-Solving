#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int a; cin >> a;
        int A[3], c = 0; cin >> A[0] >> A[1] >> A[2];
        for(int i = 0; i < 3; i++)
            if(A[i] > a) c++;
        cout << c << endl;
    }
}