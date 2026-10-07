class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> mp;
       
        int maxLen=0;

        for(int num:nums){
            mp.insert(num);
        }
        
        for(int x : mp){

            if(mp.find(x-1) == mp.end()){
            int len=1;
            int current =x;
            while(mp.find(current + 1) !=mp.end() ){
                current++;
                len++;
            }

         
        maxLen =max(len,maxLen);
        }
        }

        return maxLen;
    }
};
