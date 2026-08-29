class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        for(int b : nums){
            a = a ^ b;
        }
        return a;
    }
};