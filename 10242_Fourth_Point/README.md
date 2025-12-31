# UVa 10242 – Fourth Point

## Problem Description
You are given the coordinates of **four points**, where **two of the points are identical**.  
These points represent the vertices of a **parallelogram**, but one vertex is repeated.

Your task is to determine the coordinates of the **missing fourth vertex** of the parallelogram.

Input consists of multiple test cases and ends at EOF.

---

## Geometric Insight
In a parallelogram, the vector relationship holds:

\[
\vec{A} + \vec{C} = \vec{B} + \vec{D}
\]

If one point is duplicated, we can identify the repeated point and compute the missing one using:

\[
\text{missing} = (\text{sum of the two unique points}) - (\text{repeated point})
\]

---

## Approach
This problem is solved using **coordinate comparison and vector arithmetic**.

### Key Steps:
1. Identify which point appears twice.
2. Treat that point as the shared vertex.
3. Add the coordinates of the other two points.
4. Subtract the repeated point to obtain the missing vertex.

---

## Algorithm
1. Read eight floating-point values representing four points.
2. Detect which two points are identical.
3. Based on the duplicate, compute:
   - `x = xA + xB - xDuplicate`
   - `y = yA + yB - yDuplicate`
4. Output the resulting point with three decimal places.
5. Repeat until EOF.

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

0.0 0.0 1.0 0.0 0.0 0.0 0.0 1.0


**Output**

1.000 1.000


---

## Notes
- Floating-point comparisons are safe because the problem guarantees exact duplicates.
- Output must be formatted to exactly three decimal places.
- Handles multiple test cases until EOF.

---

## Source
UVa Online Judge – Problem 10242
