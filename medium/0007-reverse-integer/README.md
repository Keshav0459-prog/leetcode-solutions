# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 
Example 1:

Input: x = 123
Output: 321


Example 2:

Input: x = -123
Output: -321


Example 3:

Input: x = 120
Output: 21


 
Constraints:


	-231 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 38.26%)  
**Memory:** 8.6 MB (beats 54.23%)  
**Submitted:** 2026-09-07T19:30:44.160Z  

```cpp
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            
            
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            
            rev = (rev * 10) + pop;
        }
        
        return rev;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)