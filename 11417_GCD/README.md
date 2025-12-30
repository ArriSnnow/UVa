# UVa 11417 – GCD

## Problem Description
Given an integer `n` (`1 ≤ n ≤ 500`), compute the value:

\[
G = \sum_{1 \le i < j \le n} \gcd(i, j)
\]

The input consists of multiple test cases and terminates when `n = 0`.

---

## Approach
This solution uses a **brute-force approach** based on the constraints.

### Key Idea:
- Iterate over all pairs `(i, j)` such that `1 ≤ i < j ≤ n`.
- Compute `gcd(i, j)` for each pair.
- Accumulate the sum into a variable `G`.

The constraint `n ≤ 500` makes this approach feasible.

---

## Algorithm
1. Read integer `n`.
2. If `n == 0`, terminate.
3. Initialize `G = 0`.
4. For `i` from `1` to `n - 1`:
   - For `j` from `i + 1` to `n`:
     - Add `gcd(i, j)` to `G`.
5. Output `G`.

---

## Complexity
- **Time Complexity:** `O(n² log n)`
- **Space Complexity:** `O(1)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

10
100
0


**Output**

67
13015


---

## Notes
- Uses the built-in `__gcd` function for efficiency.
- Suitable for the given constraints.
- Straightforward implementation without preprocessing.

---

## Source
UVa Online Judge – Problem 11417
