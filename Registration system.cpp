#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int Search(vector<string> s, string key){
    int c =0 ;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == key) c++;
    return c;
}

int main(){
    int n;
    cin >> n;
    vector<string> s;
    unordered_map<string, int> hash;

    string in;
    for(int i = 0; i < n; i++){
        cin >> in;
        if(hash[in] == 0){
            s.push_back("OK");
        } else {
            s.push_back(in+to_string(hash[in]));
        }
        hash[in]++;
    }

    for(string val:s)
        cout << val << endl;
}