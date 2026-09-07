            int upper = b[0];
            int percent = b[1];
            int tax = min(income,upper) - pre;
            if(tax > 0){
                total += (tax * percent)/ 100.0;
            }
            pre = upper;
        for(const auto& b : brackets){
        int pre=0;
        double total = 0.0;
            if (income <= upper){
                break;
            }
    double calculateTax(vector<vector<int>>& brackets, int income) {
public:
class Solution {
