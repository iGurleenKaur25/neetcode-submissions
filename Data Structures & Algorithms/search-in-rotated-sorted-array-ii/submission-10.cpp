class Solution {
public:
    bool search(vector<int>& nums, int target) {
         int low=0;
        int right= nums.size()-1;
        while(low<=right){
            int mid = low + (right-low)/2;

            if(nums[mid] == target){
                return true;
            }
            if(nums[low] == nums[mid] && nums[mid] == nums[right]){
                low++;
                right--;
            }
            else if(nums[low] <= nums[mid]){
                if(nums[low] <= target && target < nums[mid]){
                    right = mid -1;
                }else{
                    low = mid+1;
                }

            }else{

                 if(nums[mid] < target && target <= nums[right]){
                    low = mid +1;
                }else{
                    right = mid-1;
                }
            }
        }
      return false;  
           
    }
};