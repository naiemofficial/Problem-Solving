#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n, m, c = 0, in = 1;
    cin >> n >> m;
    vector a(m, 0);
    for(int i = 0; i < m; i++)
        cin >> a[i];

    
    for(int i = 0; i < m; i++){
        if(a[i] > in){
            c += a[i]-in;
            in = a[i];
        } else if (a[i] < in){
            c += n-(in-a[i]);
            in = a[i];
        }
    }
    cout << c << endl;
}