#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t; while(t--){
        int n, m; cin >> n >> m;
        vector <int> a(n, 0);
        for(int i = 0; i < n; i++) cin >> a[i];
        string s; cin >> s;

        for(int i = 0; i < n; i++){
            if(a.size() > 0){
                int mul = 1;
                for(int j = 0; j < a.size(); j++) {
                    mul *= a[j];
                }
                if (s[i] == 'L') {
                    a.erase(a.begin());
                } else if (s[i] == 'R') {
                    a.pop_back();
                }
                cout << (mul % m) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
