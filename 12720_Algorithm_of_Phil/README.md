# UVa 12720 – Algorithm of Phil

## Problem Description
You are given a binary string `s` consisting only of characters `'0'` and `'1'`.

Phil applies a special algorithm to generate a new binary number by repeatedly choosing bits from the **middle outward**, following specific rules, and builds an integer value from the selected bits.

For each test case, output the resulting value **modulo `1000000007`**.

---

## Algorithm Insight
The algorithm works by maintaining two pointers around the center of the string:

- `p`: pointer to the left side of the center
- `q`: pointer to the right side of the center

At each step:
- A bit is selected either from the left or right pointer
- The selection rule depends on:
  - Whether the current step index is odd or even
  - The comparison between characters at `p` and `q`
- The selected bit is appended to the result using binary left-shift

This continues until all characters have been consumed.

---

## Approach
This problem is solved using **two-pointer simulation** and **bitwise construction**.

### Key Ideas:
- Process characters symmetrically from the center.
- Build the result incrementally using:

result = (result << 1) + selected_bit

- Apply modulo at each step to avoid overflow.
- Carefully manage pointers to avoid out-of-bounds access.

---

## Algorithm
1. Read the number of test cases.
2. For each test case:
 - Read the binary string `s`.
 - Initialize:
   - `p = (n / 2) - 1`
   - `q = n / 2`
 - Iterate `n` times:
   - Choose the next bit based on index parity and character comparison.
   - Shift the result left and add the selected bit.
   - Apply modulo if needed.
3. Output the result in the required case format.

---

## Complexity
- **Time Complexity:** `O(n)` per test case
- **Space Complexity:** `O(1)`

---

## Language & Tools
- **Language:** C
- **Standard:** ANSI C / C99
- **Compiler Tested:** GCC / Clang

---

## Example
**Input**

3
00000
0101101
100


**Output**

Case #1: 0
Case #2: 45
Case #3: 4


---

## Notes
- Uses bitwise operations for efficient binary construction.
- Modulo is applied incrementally to prevent overflow.
- Carefully handles both even and odd length strings.
- Output format must match exactly.

---

## Source
UVa Online Judge – Problem 12720
