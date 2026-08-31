class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size();
        vector<int> result;
        sort(nums.begin(), nums.end());
        int freq=1;
        for(int i=1; i <= n; i++){
            if(i == n || nums[i] !=nums[i-1]){
                if(freq > n/3){
                    result.push_back(nums[i-1]);
                }
                freq = 1;
            } else {
                freq ++;
            }
        }
        return result;
    }
};