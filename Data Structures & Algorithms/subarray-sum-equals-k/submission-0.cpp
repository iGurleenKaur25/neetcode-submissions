class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int>mp;

        int count=0;
        int currSum =0;

        for(int i =0; i < nums.size() ; i++){
            currSum += nums[i];
            int prevSum = currSum -k;
            if(mp[prevSum] != mp.end()){
                count++;
            }
                    
        }
    return count;   
    }
};