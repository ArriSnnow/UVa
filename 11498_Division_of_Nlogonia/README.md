# UVa 11498 – Division of Nlogonia

## Problem Description
Nlogonia is divided into four regions by two lines that intersect at a central division point `(r, c)`.

For each query point `(x, y)`:
- If the point lies on either dividing line, output `divisa`
- Otherwise, determine which quadrant the point belongs to:
  - `NO` → Northwest
  - `NE` → Northeast
  - `SO` → Southwest
  - `SE` → Southeast

Input ends when `n = 0`.

---

## Approach
This is a simple **coordinate comparison** problem.

### Key Idea:
- Compare the point `(x, y)` with the division point `(r, c)`.
- Check if it lies on one of the dividing lines.
- Otherwise, determine the relative quadrant using inequalities.

---

## Algorithm
1. While reading `n`:
   - If `n == 0`, terminate.
   - Read the division point `(r, c)`.
2. For each of the `n` queries:
   - Read `(x, y)`.
   - If `x == r` or `y == c`, output `divisa`.
   - Else if `x < r` and `y > c`, output `NO`.
   - Else if `x > r` and `y > c`, output `NE`.
   - Else if `x < r` and `y < c`, output `SO`.
   - Else output `SE`.

---

## Complexity
- **Time Complexity:** `O(1)` per query
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
2 1
10 10
-10 1
0 33
4
-1000 -1000
-1000 1000
1000 -1000
1000 1000
0


**Output**

NE
divisa
NO
SO
NO
SE
NE


---

## Notes
- Uses strict inequality to determine quadrants.
- Output must match exactly, including lowercase `divisa`.
- Efficient and straightforward implementation.

---

## Source
UVa Online Judge – Problem 11498
