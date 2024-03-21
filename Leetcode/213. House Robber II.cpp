#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fn(int i, int n, vector<int> &nums, vector<int> &dp){
        if(i >= n) return 0;
        if(dp[i] >= 0) return dp[i];

        int pick    = nums[i] + fn(i+2, n, nums, dp);
        int n_pick  = fn(i+1, n, nums, dp);
        return dp[i] = max(pick, n_pick);
    }   
    int rob(vector<int>& nums){
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int> dp1(n+1, -1), dp2(n+1, -1);

        vector<int> incl, excl;
        for(int i = 0; i < nums.size(); i++){
            if(i > 0) incl.push_back(nums[i]);
            if(i < nums.size()-1) excl.push_back(nums[i]);
        }

        int incl_max = fn(0, n-1, nums, dp1);
        int excl_max = fn(1, n, nums, dp2);
        return max(incl_max, excl_max);
    }
};

int main(){
    Solution init;
    vector<int> nums = {1, 2, 3, 4, 5, 8, 9};
    cout << init.rob(nums) << endl;
}