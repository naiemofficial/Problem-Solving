#include <iostream>
using namespace std;

int main(){
    int n, a, b, m = 0, c = 0; cin >> n;
    while(n--){
        cin >> a >> b;
        if(a > b) m++;
        else if(b > a) c++;
    }
    if(m == c){
        cout << "Friendship is magic!^^" << endl;
    } else {
        cout << (m > c ? "Mishka" : "Chris") << endl;
    }
}