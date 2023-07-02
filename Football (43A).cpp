#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, goal = 0; cin >> n;
    string team, win;
    for(int i = 0; i < n; i++){
        if(!goal){
            cin >> win;
            goal++;
        } else {
            cin >> team;
            if(team == win){
                goal++;
            } else {
                goal--;
            }
        }
    }
    cout << win << endl;
}