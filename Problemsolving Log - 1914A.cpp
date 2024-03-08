#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int mx_time; cin >> mx_time;
        string s; cin >> s;
        vector <int> count(26, 0);
        for(char ch:s) count[ch-'A']++; 

        int solved = 0;
        for(int i = 0; i < 26; i++){
            if(count[i] >= i+1) solved++; 
        }
        cout << solved << endl; 
    }
}