class Solution {
public:
    int subtractProductAndSum(int n) {
       int multiply = 1;
       int add = 0;
       
       while(n>0){
        int rem = n % 10;
        multiply *= rem;
        add+= rem;
        n/=10;
       }
       return multiply - add; 
    }
};
