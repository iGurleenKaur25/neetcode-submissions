class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>mp;
        priority_queue<pair<int,int>vector<pair<int,int>>,greater<pair<int,int>>pq;
        int n =nums.size();
        for(int x:nums){
            mp[x]++;
        }

        for(auto it:mp){
            pq.push({it.second,it.first});

            if(pq.size() > k){
                pq.pop();
            }
        }
        

        
    }
};
