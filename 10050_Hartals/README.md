# UVa 10050 – Hartals

## Problem Description
In a country with `N` working days, several political parties call for strikes (hartals) at fixed intervals.

For each test case:
- You are given:
  - `N`: the number of days
  - `P`: the number of political parties
- Each party has a hartal parameter `h`, meaning it calls a strike every `h` days.

Rules:
- **Fridays and Saturdays** (days 6 and 7 of each week) are **weekends** and must not be counted as strike days.
- Multiple parties striking on the same day still count as **one** lost working day.

Your task is to compute the **total number of working days lost** due to hartals.

---

## Approach
This problem is solved using **simulation with marking**.

### Key Ideas:
- Use a boolean array to mark strike days.
- For each party, mark all multiples of its hartal interval.
- Skip weekends (Friday and Saturday).
- Count unique marked working days.

---

## Algorithm
1. Read the number of test cases.
2. For each test case:
   - Read `N` and `P`.
   - Initialize a boolean array `hartal[1..N]` as `false`.
3. For each party:
   - Read hartal interval `h`.
   - For days `h, 2h, 3h, ... ≤ N`:
     - Skip if the day is Friday or Saturday.
     - Mark the day as a hartal day.
4. Count all marked days.
5. Output the count.

---

## Complexity
- **Time Complexity:** `O(N × P)` in the worst case
- **Space Complexity:** `O(N)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

1
14 3
3
4
8


**Output**

5


---

## Notes
- Uses `vector<bool>` for memory efficiency.
- Day numbering starts from 1.
- Friday corresponds to `day % 7 == 6`, Saturday to `day % 7 == 0`.
- Ensures each day is counted only once even if multiple parties strike.

---

## Source
UVa Online Judge – Problem 10050
