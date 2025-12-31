# UVa 11044 – Searching for Nessy

## Problem Description
A sonar device is used to search for the Loch Ness monster in a rectangular grid of size `R × C`.

Each sonar scan covers a **3 × 3** area.  
Your task is to determine the **minimum number of sonar devices** required to cover the entire grid.

---

## Key Observation
Since each sonar covers a `3 × 3` area:
- The number of sonar devices needed along the rows is `R / 3`
- The number needed along the columns is `C / 3`

The total number of devices is:

\[
\left\lfloor \frac{R}{3} \right\rfloor \times \left\lfloor \frac{C}{3} \right\rfloor
\]

---

## Approach
This is a direct **mathematical computation** problem.

### Steps:
1. Read the number of test cases.
2. For each test case:
   - Read `R` and `C`.
   - Compute `(R / 3) × (C / 3)`.
3. Output the result.

---

## Algorithm
1. Read integer `n`.
2. Repeat `n` times:
   - Read integers `R` and `C`.
   - Output `(R / 3) * (C / 3)`.

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
9 9
10 10
3 6


**Output**

9
9
2


---

## Notes
- Integer division naturally handles floor behavior.
- No loops or additional data structures are required.
- Extremely efficient solution.

---

## Source
UVa Online Judge – Problem 11044
