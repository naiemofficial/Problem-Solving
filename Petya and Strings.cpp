#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string f, s;
    cin >> f >> s;
    transform(f.begin(), f.end(), f.begin(), ::tolower);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    if(f == s){
        cout << "0" << endl;
    } else {
        for(int i=0; i < f.size(); i++){
            if(f[i] < s[i]){
                cout << "-1" << endl;
                break;
            } else if(s[i] < f[i]){
                cout << "1" << endl;
                break;
            }
        }
    }
}