#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n;
        int rem = n; string word = "";
        for(int i = 1; i <= 3; i++){
            for(char ch = 'z'; ch >= 'a'; ch--){
                int cid = ch-96;
                if(rem-cid >= 3-i){
                    word += ch;
                    rem -= cid;
                    break;
                }
            }
        }
        reverse(word.begin(), word.end());
        cout << word << endl;
    }
}