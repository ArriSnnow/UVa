# UVa 10079 – Pizza Cutting

## Problem Description
Given an integer `n` representing the number of straight cuts made on a circular pizza, determine the **maximum number of pieces** that can be obtained.

Input consists of multiple values of `n`:
- `n ≥ 0`
- Input ends at EOF

---

## Mathematical Insight
The maximum number of pieces obtained by making `n` straight cuts on a circle follows a well-known formula:

\[
\text{pieces} = \frac{n(n + 1)}{2} + 1
\]

This corresponds to the **Lazy Caterer’s Sequence**.

---

## Approach
Since the formula directly computes the result, the solution simply:
1. Reads `n`.
2. Applies the formula.
3. Prints the result.

No loops or complex logic are required.

---

## Algorithm
1. While input `n` is available and `n ≥ 0`:
   - Compute `result = n × (n + 1) / 2 + 1`
   - Output `result`

---

## Complexity
- **Time Complexity:** `O(1)` per test case
- **Space Complexity:** `O(1)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

0
1
5


**Output**

1
2
16


---

## Notes
- Uses `long long` to avoid overflow for large values of `n`.
- Fast I/O is enabled.
- Formula-based solution ensures maximum efficiency.

---

## Source
UVa Online Judge – Problem 10079
