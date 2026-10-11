class Solution {
public:

    int part(vector<int>& nums , int low , int high){

        int i =low-1;
        int pivot =nums[high];

        for(int j =low;j <high ;j++){
            if(nums[j] <= pivot){
                i++;
                swap(nums[i] , nums[j]);
            }
        }
        swap(nums[i+1],nums[high]);
        return i+1;

    }
    void sortAay(vector<int>& nums,int low , int high) {


        if(low<high){
            int p =part(nums,low,high);

            sortAay(nums,low,p-1);
            sortAay(nums,p+1,high);
        }
        
    }

    vector<int> sortArray(vector<int>& nums) {
        int n =nums.size();
        if(n>1){
              sortAay(nums,0,n-1);
        }
        
        
        return nums;
        
        }
};