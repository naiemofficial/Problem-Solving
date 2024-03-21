#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fn(int i, vector<int> &nums, unordered_map<int, int> &dp){
        if(i >= nums.size()) return 0;
        if(dp[i]) return dp[i];

        int pick    = nums[i] + fn(i+2, nums, dp);
        int n_pick  = fn(i+1, nums, dp);
        return dp[i] = max(pick, n_pick);
    }   
    int rob(vector<int>& nums){
        unordered_map<int, int> dp;
        return fn(0, nums, dp);
    }
};

int main(){
    Solution init;
    vector<int> nums = {1, 2, 3, 1, 8, 5, 9, 9, 20, 85};
    cout << init.rob(nums) << endl;
}