#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> h(n, 0), a(n, 0);
    for(int i = 0; i< n; i++)
        cin >> h[i] >> a[i];
    
    int c = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            if(h[i] == a[j]) c++;
    }
    cout << c << endl;
}