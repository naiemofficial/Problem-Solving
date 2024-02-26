#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int b, p, f; cin >> b >> p >> f;
        int h, c; cin >> h >> c;

        int profit = 0;
        int maxb = min(b/2, p+f); // maxb => Maximum Burger (Possible)
        if(maxb > 0){
            if(max(h, c) == h){
                if(p < maxb){
                    profit += p*h;
                    maxb -= p;
                } else {
                    profit += maxb*h;
                    maxb = 0;
                }
                if(f < maxb){
                    profit += f*c;
                } else {
                    profit += maxb*c;
                }
            } else {
                if(f < maxb){
                    profit += f*c;
                    maxb -= f;
                } else {
                    profit += maxb*c;
                    maxb = 0;
                }
                if(p < maxb){
                    profit += p*h;
                } else {
                    profit += maxb*h;
                }
            }
        }
        cout << profit << endl;
    }
}