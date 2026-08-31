# Majority Element II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array of size n, find all elements that appear more than ⌊n / 3⌋ times.

 
Example 1:

Input: nums = [3,2,3]
Output: [3]


Example 2:

Input: nums = [1]
Output: [1]


Example 3:

Input: nums = [1,2]
Output: [1,2]


 
Constraints:


	1 <= nums.length <= 5 * 104
	-109 <= nums[i] <= 109


 
Follow up: Could you solve the problem in linear time and in O(1) space?

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.2 MB  
**Submitted:** 2026-08-31T04:13:56.460Z  

```cpp
                continue;
            }
            int freq = 0;
            for(int el: nums){
                if(val == el){
                    freq++;
                }
            }
        }
            if(freq> n/3){
                result.emplace_back(val);
            }
    }
        return result;
};

```

---

[View on LeetCode](https://leetcode.com/problems/majority-element-ii/)