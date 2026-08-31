class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        for(int val : nums){
            if(find(result.begin(), result.end(), val) != result.end()){
                continue;
            }
            int freq = 0;
            for(int el: nums){
                if(val == el){
                    freq++;
                }
            }
            if(freq> n/3){
                result.emplace_back(val);
            }
        }
        return result;
    }
};