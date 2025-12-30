# UVa 10633 – Rare Easy Problem

## Problem Description
Given a number `x`, find all non-negative integers `N` such that:

\[
N - \left\lfloor \frac{N}{10} \right\rfloor = x
\]

For each input `x`, output all valid values of `N` in increasing order on a single line, separated by spaces.

Input ends when `x = 0`.

---

## Mathematical Insight
Let:
- \( N = 10M + k \), where \( 0 \le k \le 9 \)
- Then \( \left\lfloor \frac{N}{10} \right\rfloor = M \)

Substituting into the equation:
\[
(10M + k) - M = x
\]
\[
9M + k = x
\]

Thus:
- \( M = \frac{x - k}{9} \)
- This is valid only if \( (x - k) \) is divisible by 9 and \( M \ge 0 \)

---

## Approach
The solution tries all possible values of the last digit `k` from `9` down to `0`.

### Steps:
1. For each `k` from 9 to 0:
   - Check if `(x - k) % 9 == 0`
   - Compute `M = (x - k) / 9`
   - Compute `N = 10 * M + k`
2. Print all valid `N` values in ascending order.
3. Repeat for each input `x` until `x = 0`.

---

## Algorithm
1. While reading `x`:
   - If `x == 0`, terminate.
   - Initialize a flag to manage spacing.
   - For `k` from 9 down to 0:
     - If `(x - k)` is divisible by 9:
       - Compute `N`
       - Print `N`
2. Print a newline after each test case.

---

## Complexity
- **Time Complexity:** `O(1)` per test case (only 10 iterations)
- **Space Complexity:** `O(1)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

18
19
0


**Output**

20
21 30


---

## Notes
- Uses `unsigned long long` to safely handle large values.
- Iterating `k` from 9 down to 0 ensures ascending order of results.
- Handles multiple outputs per test case correctly.

---

## Source
UVa Online Judge – Problem 10633
