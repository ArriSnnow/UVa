# UVa 11222 – Only I Did It

## Problem Description
Three friends participate in a programming contest and each solves a set of problems.

For each test case:
- You are given the list of problems solved by **each of the three friends**.
- A problem is considered **exclusive** if it was solved by **exactly one** friend.

Your task is to:
1. Determine which friend(s) solved the **maximum number of exclusive problems**.
2. Output:
   - The friend number (1, 2, or 3)
   - The number of exclusive problems they solved
   - The list of those exclusive problems (sorted)

---

## Approach
This problem is solved using **frequency counting and filtering**.

### Key Ideas:
- Use an array to count how many times each problem appears across all friends.
- A problem is exclusive if its total count is exactly `1`.
- For each friend:
  - Count how many exclusive problems they solved.
- Find the maximum exclusive count and output all friends who achieved it.

---

## Algorithm
1. Read the number of test cases `t`.
2. For each test case:
   - Read the number of problems solved by each of the three friends.
   - Store each friend’s problems and update a global frequency array.
   - Sort each friend’s problem list.
3. For each friend:
   - Count problems that appear exactly once in the frequency array.
4. Determine the maximum exclusive count.
5. Output all friends whose exclusive count equals the maximum.

---

## Complexity
- **Time Complexity:** `O(P log P)` per test case  
  where `P` is the number of problems solved by a friend (due to sorting)
- **Space Complexity:** `O(U)`  
  where `U` is the range of problem numbers

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

1
3 1 2 3
3 2 3 4
3 3 4 5


**Output**

Case #1:
1 1 1
3 1 5


---

## Notes
- Multiple friends may tie for the maximum number of exclusive problems.
- Problem lists are printed in sorted order.
- Output formatting must match exactly, including case numbering.

---

## Source
UVa Online Judge – Problem 11222
