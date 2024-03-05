#include <iostream>
using namespace std;

char findMissing(string s){
    if(s.find('B') < s.size() && s.find('C') < s.size()){
        return 'A';
    } else if(s.find('C') < s.size() && s.find('A') < s.size()){
        return 'B';
    } else if(s.find('A') < s.size() && s.find('B') < s.size()){
        return 'C';
    }
    return '?';
}

int main(){
    int t; cin >> t; while(t--){
        string a, b, c;
        cin >> a >> b >> c;

        if(a.find('?') < a.size()){
            cout << findMissing(a) << endl;
        } else if(b.find('?') < b.size()){
            cout << findMissing(b) << endl;
        } else if(c.find('?') < c.size()){
            cout << findMissing(c) << endl;
        }
    }
}