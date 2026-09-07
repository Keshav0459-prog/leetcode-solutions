class Solution {
public:
    bool isPalindrome(int x) {
        int reverse = 0;
        while(x!=0){
            int rem = x % 10;
            reverse = (reverse*10) + rem;
        } return reverse;
            x/=10;
        if(reverse == x){
            return true;
        } else {
            return false;
        }
    }
};
