class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1){return nums[0];}
        vector<int>dp(n);

        int mon =0;
        dp[0] =nums[0];
        dp[1] =max(nums[1],nums[0]);

        for(int i = 2; i < n ; i++){
            dp[i]= max(nums[i-2]+nums[i] , nums[i-1]);
        }
    return dp[n-1];    
    }
};
