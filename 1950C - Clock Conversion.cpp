#include <iostream>
#include <string>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        string s; cin >> s;
        string h = "", m = "";
        h += s[0];
        h += s[1];
        m += s[3];
        m += s[4];
        int hour = stoi(h);

        if(hour == 0){
            h = "12";
        } else if(hour > 12){
            int h_24 = hour-12;
            h = to_string(h_24);
            if(h_24 < 10){
                h = "0"+h;
            }
        }
        cout << h << ":" << m << " ";
        cout << (hour >= 12 ? "PM" : "AM") << endl;
    }
}