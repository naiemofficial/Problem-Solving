#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> A;
    int c = 1;
    for(int i = 1; i <= 1000; i++, c++){
        while((c/3 && c%3 == 0) || (c%10 == 3)) c++;
        A.push_back(c);
    }
    int t; cin >> t; while(t--){
        int k; cin >> k;
        cout << A[k-1] << endl;
    }
}