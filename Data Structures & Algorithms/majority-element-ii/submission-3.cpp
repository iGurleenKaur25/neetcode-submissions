class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        vector<int> ans;
        int n =nums.size();
        int count =1;
        for(int i =1; i < n ; i++){
            if(nums[i-1] == nums[i]){
                count++;
            }
            else{
                count=1;
            }
            if(count > n/3){
               ans.push_back(nums[i]);
            }
        }
       return ans; 
    }
};