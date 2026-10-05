class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i = 0 ; i <n-3; i++){
            if(i > 0 && nums[i] == nums[i - 1] )continue;
            for(int j = i+1 ;j < n-2 ; j++){
                if(j > i &&  nums[j] ==nums[j-1]  )continue;
            
            int left = j+1;
            int right= n-1;
            while(left < right){
            long long sum = (long long)nums[i] +nums[j] + nums[left]+ nums[right];
               if(sum == target){
                  ans.push_back({nums[i],nums[j],nums[left] , nums[right]});
                  left++;
                right--;
               }else if(sum > target){
                    right--;
               }else{
                left++;
               }
            }
            }
        }
        return ans;
    }
};