#include <iostream>
using namespace std;

int solveMeFirst(int a, int b){
    return a+b;
}

int main(){
    string a, b, con_a = "", con_b = "";
    getline(cin, a);
    getline(cin, b);
    for(int i = 0; i < a.size(); i++)
        if(isdigit(a.at(i))) con_a += a[i];
    for(int i = 0; i < b.size(); i++)
        if(isdigit(b[i])) con_b += b[i];

    cout << solveMeFirst(stoi(con_a), stoi(con_b)) << endl;
}