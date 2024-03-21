// Leetcode - https://bit.ly/3x0Ma9P
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(int n, unordered_map<int, int> &a){
        if(n <= 1) return 1;
        if(a[n]) return a[n];
        int step_1  = jump(n-1, a);
        int step_2  = jump(n-2, a);
        return a[n] = step_1+step_2;
    }
    int climbStairs(int n) {
        unordered_map<int, int> a;
        return jump(n, a);
    }
};

int main(){
    Solution init;
    int n; cin >> n;
    cout << init.climbStairs(n) << endl;
}