#include <iostream>
using namespace std;

int main(){
    int a, b, c = 0;
    cin >> a >> b;
    while(true){
        if(a <= b){
            a *= 3;
            b *= 2;
            c++;
        } else {
            break;
        }
    }
    cout << c << endl;
}