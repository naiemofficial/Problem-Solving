#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        unordered_map<char, bool> flag; bool distracted = false;
        int n; cin >> n;
        string s; cin >> s;
        for(int i = 0; i < n; i++){
            if(flag[s[i]]){
                distracted = true; break;
            } else if(!flag[s[i]] && s[i] != s[i+1]){
                flag[s[i]] = true;
            }
        }
        cout << (distracted ? "NO" : "YES") << endl;
    }
}