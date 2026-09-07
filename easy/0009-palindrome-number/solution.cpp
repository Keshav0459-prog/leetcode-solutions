class Solution {
public:
    bool isPalindrome(int x) {
        int reverse = 0;
        if(x<0) return false;
        int original = x;
        while(x!=0){
            int rem = x % 10;
            reverse = (reverse*10) + rem;
            x/=10;
        } return reverse == original;
    }
};