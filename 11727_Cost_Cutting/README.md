# UVa 11727 – Cost Cutting

## Problem Description
In this problem, you are given the salaries of three employees.  
Your task is to determine the **middle salary** (the one that is neither the highest nor the lowest).

Each test case is numbered and the output must include the case number.

---

## Approach
This problem is solved using **sorting**.

### Key Idea:
- Read the three salary values.
- Sort them.
- The middle value after sorting is the answer.

---

## Algorithm
1. Read integer `n`, the number of test cases.
2. For each test case:
   - Read three integers into a list.
   - Sort the list.
   - Output the middle element with the case number.

---

## Complexity
- **Time Complexity:** `O(1)` per test case (sorting only 3 elements)
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
1000 2000 3000
3000 1000 2000
2000 3000 1000


**Output**

Case 1: 2000
Case 2: 2000
Case 3: 2000


---

## Notes
- Sorting three values is simple and efficient.
- Output format must match exactly, including case numbering.
- No special edge cases to handle.

---

## Source
UVa Online Judge – Problem 11727
