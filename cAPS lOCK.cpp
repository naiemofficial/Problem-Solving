#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    string temp = s; bool flag = false;
    for(int i = 1; i < temp.length(); i++){
        if(temp[i] == tolower(temp[i])){
            flag = true;
            break;
        }
        temp[i] = tolower(temp[i]);
    }
    temp[0] = (!flag && temp[0] == toupper(temp[0])) ? tolower(temp[0]) : toupper(temp[0]);
    cout << ((flag) ? s : temp) << endl;
}