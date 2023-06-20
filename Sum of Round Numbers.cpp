#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int c = 0, result;
        vector<int> k;
        result = n/10000;
        if(result > 0){ n %= 10000; k.push_back(result*10000); c++; }
        result = n/1000;
        if(result > 0){ n %= 1000; k.push_back(result*1000); c++; }
        result = n/100;
        if(result > 0){ n %= 100; k.push_back(result*100); c++; }
        result = n/10;
        if(result > 0){ n %= 10; k.push_back(result*10); c++; }
        if(n > 0 && n < 10){ k.push_back(n); c++; }
        cout << c << endl;
        for(int x:k)
            cout << x << " ";
    }
}