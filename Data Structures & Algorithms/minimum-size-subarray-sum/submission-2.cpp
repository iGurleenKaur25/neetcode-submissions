class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int left =0;
        int len = MAX_INT;
        int sum =0;

        for(int right=0; right<nums.size();right++){
            sum += nums[right];

            if(sum >= target){
                len = min(len , right-left +1);
            }
            left++;
            sum-=nums[left];
        }
     return 0;   
    }
};