#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long int n, k, mid;
    cin >> n >> k;
    mid = (n%2 == 0) ? n/2 : (n/2)+1;

    if(k <= mid){ // If target place is in odd numbers
        cout << (k*2)-1 << endl;
    } else { // If Target value is in even numbers
        cout << (k-mid)*2 << endl;
    }
}