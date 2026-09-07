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
**Memory:** 7.8 MB  
**Submitted:** 2026-09-07T20:00:05.507Z  

```cpp
        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                count++; 
                for (long long j = 1LL * i * i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }
        
        return count;
        
    }
        
        int count = 0;
        vector<bool> prime(n, true);
    int countPrimes(int n) {
public:

```

---

[View on LeetCode](https://leetcode.com/problems/count-primes/)