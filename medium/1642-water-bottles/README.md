# Water Bottles

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.8 MB (beats 81.75%)  
**Submitted:** 2026-08-20T04:17:10.406Z  

```cpp
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        return numBottles + (numBottles - 1) / (numExchange - 1);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/water-bottles/)