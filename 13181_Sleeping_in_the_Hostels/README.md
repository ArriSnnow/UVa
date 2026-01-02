# UVa 13181 – Sleeping in the Hostels

## Problem Description
You are given a string representing a row of hostel rooms:

- `.` represents an **empty bed**
- Any other character represents an **occupied bed**

A person wants to sleep in a position that **maximizes the distance to the nearest occupied bed**.

Your task is to compute the **maximum possible minimum distance** the person can achieve by choosing the best empty bed.

Input consists of multiple lines and ends at EOF.

---

## Approach
This problem is solved by **analyzing consecutive segments of empty beds (`.`)**.

### Key Ideas:
- Consecutive dots form segments of empty beds.
- The best sleeping position depends on:
  - Whether the segment is at the **beginning**, **middle**, or **end** of the string.
- Different formulas apply depending on the segment position.

---

## Segment Analysis
Let `len[i]` be the length of a consecutive `.` segment:

1. **Leading segment (start of string)**  
   - Maximum distance: `len[0] - 1`

2. **Trailing segment (end of string)**  
   - Maximum distance: `len[last] - 1`

3. **Middle segments**  
   - Best position is in the middle of the segment
   - Maximum distance: `(len[i] - 1) / 2`

The final answer is the maximum of all these values.

---

## Algorithm
1. Read each input line.
2. Identify all consecutive segments of `.` and store their lengths.
3. Compute:
   - Leading segment contribution
   - Trailing segment contribution
   - Middle segment contributions
4. Output the maximum value.

---

## Complexity
- **Time Complexity:** `O(n)` per line  
  where `n` is the length of the string
- **Space Complexity:** `O(n)` (to store segment lengths)

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

..X..X....


**Output**

3


---

## Notes
- Handles edge cases such as all empty beds or no empty beds.
- Uses integer division for correct distance calculation.
- Efficient single-pass parsing of the input string.
- Output format must match exactly.

---

## Source
UVa Online Judge – Problem 13181
