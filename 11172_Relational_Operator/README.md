# UVa 11172 – Relational Operator

## Problem Description
Given several pairs of integers, determine the relationship between each pair.

For each pair `(a, b)`:
- Output `>` if `a > b`
- Output `<` if `a < b`
- Output `=` if `a == b`

---

## Approach
This is a straightforward **comparison problem**.

### Steps:
1. Read the number of test cases.
2. For each test case:
   - Read integers `a` and `b`.
   - Compare them and output the corresponding symbol.

---

## Algorithm
1. Read integer `n`.
2. Repeat `n` times:
   - Read `a` and `b`.
   - If `a > b`, output `>`.
   - Else if `a < b`, output `<`.
   - Else output `=`.

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

3
10 20
20 10
10 10


**Output**

<

=


---

## Notes
- Uses `long long` to safely handle large values.
- Simple and efficient logic.
- Output format must match exactly.

---

## Source
UVa Online Judge – Problem 11172
