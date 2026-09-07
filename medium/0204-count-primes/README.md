# Count Primes

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer n, return the number of prime numbers that are strictly less than n.

 
Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.


Example 2:

Input: n = 0
Output: 0


Example 3:

Input: n = 1
Output: 0


 
Constraints:


	0 <= n <= 5 * 106

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.6 MB  
**Submitted:** 2026-09-07T19:54:55.955Z  

```cpp
class Solution {
public:
    int countPrimes(int n) {
        if(n<=1) return false;
        for(int i=2; i*i <=n; i++){
            if(n%i==0){
                return false;
            }
        }
    }
        return true;
};

```

---

[View on LeetCode](https://leetcode.com/problems/count-primes/)