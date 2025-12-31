# UVa 11192 – Group Reverse

## Problem Description
Given an integer `G` and a string `s`, divide the string into `G` equal-sized groups and reverse the characters within each group.

- The length of the string is guaranteed to be divisible by `G`.
- Input ends when `G = 0`.

---

## Approach
This problem is solved using **string manipulation**.

### Key Idea:
- Each group has size `k = length(s) / G`.
- Reverse each substring of length `k` independently.
- Concatenate all reversed groups to form the final string.

---

## Algorithm
1. Read integer `G`.
2. If `G == 0`, terminate.
3. Read string `s`.
4. Compute group size `k = s.length() / G`.
5. For each group:
   - Reverse the substring `[i, i + k)`.
6. Output the resulting string.

---

## Complexity
- **Time Complexity:** `O(n)` where `n` is the length of the string
- **Space Complexity:** `O(1)` (in-place reversal)

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

3 abcdefghijklmnopqrstu
2 abcdefghijklmnopqrstu
0


**Output**

cbafedihglkjonmrqputs
gfedcbahijklmnopqrstu


---

## Notes
- Uses `std::reverse` for clean and efficient substring reversal.
- Guaranteed input validity simplifies edge case handling.
- Operates directly on the original string.

---

## Source
UVa Online Judge – Problem 11192
