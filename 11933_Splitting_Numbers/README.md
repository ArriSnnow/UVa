# UVa 11933 – Splitting Numbers

## Problem Description
Given a positive integer `n`, split its **set bits** (bits equal to `1`) alternately into two numbers `a` and `b`.

Rules:
- Traverse the binary representation of `n` from **least significant bit to most significant bit**.
- The first encountered `1` bit goes to `a`, the next to `b`, then alternately.
- Bits that are `0` are ignored.
- Input ends when `n = 0`.

Output the resulting values of `a` and `b`.

---

## Approach
This problem is solved using **bitwise processing and simulation**.

### Key Idea:
- Examine each bit of `n` starting from the least significant bit.
- Keep a flag to decide whether the current `1` bit goes to `a` or `b`.
- Maintain the correct bit value using a power-of-two multiplier.

---

## Algorithm
1. While reading `n`:
   - If `n == 0`, terminate.
2. Initialize:
   - `a = 0`, `b = 0`
   - `addToA = true`
   - `toAdd = 1`
3. While `n > 0`:
   - If the least significant bit of `n` is `1`:
     - Add `toAdd` to `a` if `addToA` is true, otherwise to `b`
     - Toggle `addToA`
   - Multiply `toAdd` by `2`
   - Divide `n` by `2`
4. Output `a` and `b`.

---

## Complexity
- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`

---

## Language & Tools
- **Language:** C
- **Standard:** ANSI C / C99
- **Compiler Tested:** GCC / Clang

---

## Example
**Input**

7
13
0


**Output**

5 2
9 4


---

## Explanation (Example)
For `n = 7` (`111₂`):
- First `1` → `a` gets `1`
- Second `1` → `b` gets `2`
- Third `1` → `a` gets `4`
- Result: `a = 5`, `b = 2`

---

## Notes
- Uses bitwise operations and integer arithmetic.
- Alternating assignment ensures correct distribution of bits.
- Efficient and safe for 32-bit unsigned integers.

---

## Source
UVa Online Judge – Problem 11933
