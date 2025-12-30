# UVa 10300 – Ecological Premium

## Problem Description
In this problem, a government pays farmers an **ecological premium** based on the size of their farms and an environmental friendliness factor.

For each test case:
- You are given the number of farmers `f`.
- For each farmer:
  - `s`: size of the farm
  - `a`: number of animals (not used in calculation)
  - `e`: environmental friendliness factor

The premium paid to each farmer is `s × e`.

Your task is to compute the total ecological premium for each test case.

---

## Approach
This is a straightforward **input-processing and summation** problem.

### Key Observation:
- The number of animals (`a`) is irrelevant to the calculation.
- Only `s × e` contributes to the final result.

---

## Algorithm
1. Read the number of test cases `n`.
2. For each test case:
   - Read the number of farmers `f`.
   - Initialize `result = 0`.
   - For each farmer:
     - Read `s`, `a`, and `e`.
     - Add `s × e` to `result`.
3. Output `result`.

---

## Complexity
- **Time Complexity:** `O(f)` per test case
- **Space Complexity:** `O(1)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

2
3
1 1 1
2 2 2
3 3 3
5
10 5 2
8 3 1
5 2 2
4 1 3
6 4 1


**Output**

14
53


---

## Notes
- Uses integer arithmetic only.
- Ignores unnecessary input values as required.
- Simple and efficient solution.

---

## Source
UVa Online Judge – Problem 10300
