# First Unique Character in a String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s`, find the **first** non-repeating character in it and return its index. If it **does not** exist, return `-1`.

 

**Example 1:**

**Input:** s = "leetcode"

**Output:** 0

**Explanation:**

The character `'l'` at index 0 is the first character that does not occur at any other index.

**Example 2:**

**Input:** s = "loveleetcode"

**Output:** 2

**Example 3:**

**Input:** s = "aabb"

**Output:** -1

 

**Constraints:**

- 1 <= s.length <= 105
- s consists of only lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 79.75%)  
**Memory:** 14.6 MB (beats 86.61%)  
**Submitted:** 2026-09-24T06:49:57.963Z  

```cpp
class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};
        for (char c : s) {
            count[c - 'a']++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (count[s[i] - 'a'] == 1) {
                return i;
            }
        }
        
        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/first-unique-character-in-a-string/)