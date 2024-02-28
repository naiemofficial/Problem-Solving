#include <iostream>
using namespace std;

int main(){
    string num; cin >> num;
    int ascii = 48;
    for(int i = 0; i < num.length(); i++){
        int t = (int)num[i]-ascii;
        if(!(i == 0 && t == 9) && t >= 5){
            num[i] = char((9-t)|ascii);
        }
    }
    cout << num << endl;
}