# UVa 572 – Oil Deposits

## Problem Description
Given a 2D grid representing a map, count the number of **oil deposits**.

- `'@'` represents oil.
- `'*'` represents empty land.
- An oil deposit consists of one or more `'@'` cells connected **horizontally, vertically, or diagonally**.
- The input ends when `m = 0` and `n = 0`.

Your task is to count the number of distinct oil deposits in each grid.

---

## Approach
This problem is solved using **Depth-First Search (DFS)** on a grid.

### Key Idea:
- Each unvisited `'@'` cell starts a new oil deposit.
- Perform DFS to mark all connected `'@'` cells as visited.
- Count how many times DFS is initiated.

---

## Algorithm
1. Read grid dimensions `m` and `n`.
2. Store the grid as a vector of strings.
3. Traverse each cell in the grid:
   - If the cell contains `'@'`, increment the deposit counter.
   - Run DFS from that cell to mark the entire connected component.
4. DFS explores all 8 directions (including diagonals).
5. Output the total count.

---

## Complexity
- **Time Complexity:** `O(m × n)`
- **Space Complexity:** `O(m × n)` (due to recursion stack in worst case)

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

1 5
@@@
3 5
@@*
@@@
0 0


**Output**

1
2


---

## Notes
- The grid is modified in-place to mark visited cells.
- DFS considers all 8 neighboring cells.
- Recursive DFS is sufficient given the problem constraints.

---

## Source
UVa Online Judge – Problem 572
