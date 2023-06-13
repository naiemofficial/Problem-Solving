#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int A, B, C, D;
    A = B = C = D = 0;

    A = n/100;
    if(A) n = n%100;
    B = n/20;
    if(B) n = n%20;
    C = n/10;
    if(C) n = n%10;
    D = n/5;
    if(D) n = n%5;
    
    cout << n+A+B+C+D << endl;
}