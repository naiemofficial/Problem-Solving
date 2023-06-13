#include <iostream>
using namespace std;

int main(){
    int n, in, odd = 0, odd_c = 0, even = 0, even_c = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> in;
        if(in%2 == 0){
            even_c++;
            if(!even) even = i+1;
        } else {
            odd_c++;
            if(!odd) odd = i+1;
        }
    }
    cout << ((odd_c >= even_c) ? even : odd) << endl;
}