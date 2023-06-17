#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string name, residence, pile, n_r;
    cin >> name >> residence >> pile;

    n_r = name+residence;
    sort(n_r.begin(), n_r.end());
    sort(pile.begin(), pile.end());

    cout << (n_r == pile ? "YES" : "NO") << endl;
}