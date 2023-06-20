#include <iostream>
using namespace std;

int main(){
    long t;
    cin >> t;
    for(int i = 0; i < t; i++){
        long long in;
        cin >> in;
        long long mid = in; 
        
        long long sum = 0;
        while(mid != 1){
            sum += mid;
            mid = mid/2;
        }
        sum += mid;
        cout << sum << endl;
    }
}