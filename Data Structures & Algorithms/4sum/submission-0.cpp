class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
       


        for(int i = 0 ; i <n-1; i++){
            if(i > 0 && nums[i-1] == nums[i] )continue;
            for(int j = i+1 ;j < n-2 ; j++){
                if(j > 0 && nums[j-1] == nums[j] )continue;
            
            int left = j+1;
            int right= n-1;
            while(left < right){
            int sum = nums[i] +nums[j] + nums[left]+ nums[right];
               if(sum == target){
                  ans.push_back(nums[i],nums[j],nums[left] , nums[right]);
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