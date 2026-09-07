class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double total = 0.0;
        int pre=0;
        for(const auto& b : brackets){
            int upper = b[0];
            int percent = b[1];
            int tax = min(income,upper) - pre;
            if(tax > 0){
                total += (tax * percent)/ 100.0;
            }
            pre = upper;
            if (income <= upper){
                break;
            }
        } 
        return total;
    }
};