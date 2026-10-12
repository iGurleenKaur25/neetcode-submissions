class Solution {
public:
    bool isPalindrome(string s) {

        int left =0;
        int right = s.size();

        while(left < right){
            if(isAlpa && string[left] == string[right]){
                left++;
                right--;
                return true;
            }
        }
    return false;  
    }
};
