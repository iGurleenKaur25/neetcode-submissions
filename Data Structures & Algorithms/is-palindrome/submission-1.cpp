class Solution {
public:
    bool isPalindrome(string s) {

        int left =0;
        int right = s.size();

        while(left < right){
            if(!isAlnum(left))continue;
            if(!isAlnum(right))continue;

            if( s[left] == s[right]){
                left++;
                right--;
                return true;
            }
        }
    return false;  
    }
};
