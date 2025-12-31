# UVa 10642 – Can You Solve It?

## Problem Description
You are given two points `(x₁, y₁)` and `(x₂, y₂)` on a special infinite grid.

The grid is traversed diagonally in the following order:
- Points are numbered along diagonals where `x + y` is constant.
- Within each diagonal, points are ordered by increasing `x`.

Your task is to determine the **number of steps** required to move from `(x₁, y₁)` to `(x₂, y₂)` following this traversal order.

---

## Mathematical Insight
Each grid point `(x, y)` is mapped to a unique index using a diagonal enumeration:

\[
d = x + y
\]

\[
\text{index}(x, y) = \frac{d(d + 1)}{2} + x
\]

The number of steps between two points is the **absolute difference** between their indices.

---

## Approach
This problem is solved using **mathematical mapping** rather than simulation.

### Steps:
1. Map each coordinate to its unique index.
2. Compute the absolute difference between the two indices.
3. Output the result with proper formatting.

---

## Algorithm
1. Read integer `T`, the number of test cases.
2. For each test case:
   - Read coordinates `(x₁, y₁)` and `(x₂, y₂)`.
   - Compute `index(x₁, y₁)` and `index(x₂, y₂)`.
   - Output the absolute difference between the two indices.

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

2
0 0 1 1
3 2 1 1


**Output**

Case 1: 3
Case 2: 5


---

## Notes
- Uses `long long` to avoid overflow.
- Efficient mathematical solution avoids grid traversal.
- Output format must match exactly.

---

## Source
UVa Online Judge – Problem 10642
