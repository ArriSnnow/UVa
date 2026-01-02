# UVa 12356 – Army Buddies

## Problem Description
An army consists of `N` soldiers standing in a line, numbered from `1` to `N`.

During a battle, several **ranges of soldiers are eliminated**.  
For each elimination range `[L, R]`, all soldiers from position `L` to `R` (inclusive) are removed from the line.

After each removal, you must report:
- The **nearest surviving soldier to the left** of `L`
- The **nearest surviving soldier to the right** of `R`

If there is no surviving soldier on one side, output `*`.

Input ends when `N = 0`.

---

## Approach
This problem is solved using **array-based doubly linked list simulation**.

### Key Ideas:
- Maintain two arrays:
  - `toLeft[i]` → the nearest alive soldier to the left of `i`
  - `toRight[i]` → the nearest alive soldier to the right of `i`
- Removing a range `[L, R]` only requires updating the neighbors **just outside** the range.
- This avoids costly shifting or reallocation.

---

## Algorithm
1. Initialize two arrays `toLeft` and `toRight` to simulate a doubly linked list.
2. For each removal `[L, R]`:
   - Identify:
     - `leftNeighbor = toLeft[L]`
     - `rightNeighbor = toRight[R]`
   - Update links:
     - `toRight[leftNeighbor] = rightNeighbor`
     - `toLeft[rightNeighbor] = leftNeighbor`
   - Output the neighbors (or `*` if none).
3. Print `-` after each test case.

---

## Complexity
- **Time Complexity:** `O(N + B)` per test case  
  (`N` for initialization, `B` removals in constant time)
- **Space Complexity:** `O(N)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

10 4
1 3
5 6
2 2
8 9
0 0


**Output**

4
4 7
1 4
7 10


---

## Notes
- Uses `-1` internally to represent no neighbor.
- Outputs are 1-based indices as required by the problem.
- Efficient solution suitable for large `N` (up to 100,000).
- Avoids STL containers for maximum performance.

---

## Source
UVa Online Judge – Problem 12356
