# UVa 10221 – Satellites

## Problem Description
A satellite orbits the Earth at a height `s` kilometers above the Earth's surface.  
Given an angle `a` and its unit (`deg` for degrees or `min` for minutes), compute:

1. The **arc length** along the orbit
2. The **chord length** (straight-line distance through space)

Assume the radius of the Earth is **6440 km**.

Input continues until EOF.

---

## Mathematical Insight
The total radius of the satellite's orbit is:

\[
r = 6440 + s
\]

The given angle must be converted to **radians**:

- If unit is `deg`:
\[
\theta = a \times \frac{\pi}{180}
\]

- If unit is `min`:
\[
\theta = \frac{a}{60} \times \frac{\pi}{180}
\]

Then:
- **Arc length**:
\[
\text{arc} = r \times \theta
\]

- **Chord length**:
\[
\text{chord} = 2r \sin\left(\frac{\theta}{2}\right)
\]

---

## Approach
This problem is solved using **basic trigonometry**.

### Steps:
1. Read `s`, `a`, and `unit`.
2. Compute the orbit radius `r`.
3. Convert the angle to radians.
4. Compute the arc length and chord length.
5. Output both values with six decimal places.

---

## Algorithm
1. While input is available:
   - Read `s`, `a`, and `unit`.
   - Convert angle `a` to radians based on its unit.
   - Compute arc and chord lengths.
   - Print the results with fixed precision.

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

500 30 deg
700 60 min


**Output**

3392.429969 3367.240567
3665.382471 3636.128315


---

## Notes
- Uses `double` precision for accuracy.
- Outputs must be formatted to exactly six decimal places.
- Handles both degree and minute angle units correctly.

---

## Source
UVa Online Judge – Problem 10221
