class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b = 1;
        int nextterm = 0;
        for(int i =0; i<n; i++){
            nextterm = a+b;
            a=b;
            b=nextterm;
        }
        return a;
    }
};