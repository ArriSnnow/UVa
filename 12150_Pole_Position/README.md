# UVa 12150 – Pole Position

## Problem Description
In a car race, the final starting grid is determined based on relative position changes.

You are given `n` drivers.  
For each driver `i` (0-based input order), you receive a pair:

- `x`: the driver number
- `v`: the relative position shift

The driver should be placed at position `(i + v)` in the final grid.

Rules:
- All final positions must be within bounds `[0, n-1]`
- No two drivers can occupy the same position
- If the final configuration is impossible, output `-1`

Input ends when `n = 0`.

---

## Approach
This problem is solved using **direct index placement with validation**.

### Key Ideas:
- Use an array to represent final positions.
- For each driver:
  - Compute the target index `i + v`
  - Check for out-of-bounds or collisions
- If any invalid condition occurs, the configuration is impossible.

---

## Algorithm
1. While reading `n`:
   - If `n == 0`, terminate.
2. Initialize an array `rank[]` of size `n` with all values set to `0`.
3. For each index `i` from `0` to `n-1`:
   - Read `x` and `v`
   - Compute target position `pos = i + v`
   - If `pos` is out of range or already occupied:
     - Mark error
4. If an error occurred:
   - Output `-1`
5. Otherwise:
   - Output the `rank[]` array.

---

## Complexity
- **Time Complexity:** `O(n)` per test case
- **Space Complexity:** `O(n)`

---

## Language & Tools
- **Language:** C
- **Standard:** ANSI C / C99
- **Compiler Tested:** GCC / Clang

---

## Example
**Input**

5
1 0
2 1
3 -1
4 1
5 -1
0


**Output**

1 3 2 5 4


---

## Notes
- Index validation is crucial to avoid invalid placements.
- The `rank` array directly represents the final grid.
- Early detection of errors improves efficiency.

---

## Source
UVa Online Judge – Problem 12150
