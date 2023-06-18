#include <iostream>
using namespace std;

int main(){
    int n, recruite, police = 0, crime = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> recruite;
        if(recruite < 1){
            if(police > 0) police--;
            else crime++;
        } else {
            police += recruite;
        }
    }
    cout << crime << endl;
}