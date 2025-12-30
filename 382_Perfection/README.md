# UVa 382 – Perfection

## Problem Description
For each given positive integer `n`, determine whether it is:

- **PERFECT**: the sum of its proper divisors equals `n`
- **DEFICIENT**: the sum of its proper divisors is less than `n`
- **ABUNDANT**: the sum of its proper divisors is greater than `n`

Proper divisors include all positive divisors of `n` excluding `n` itself.

Input ends when `n = 0`.

The output must follow a strict format defined by the problem.

---

## Approach
This problem is solved using **direct divisor enumeration**.

### Key Idea:
- All proper divisors of `n` are ≤ `n / 2`.
- Iterate from `1` to `n / 2` and sum all divisors.
- Compare the sum with `n` to classify the number.

---

## Algorithm
1. Print the header `"PERFECTION OUTPUT"`.
2. While reading `n`:
   - If `n == 0`, stop.
   - Compute the sum of all proper divisors of `n`.
   - Classify `n` as DEFICIENT, PERFECT, or ABUNDANT.
   - Print the result using formatted width.
3. Print `"END OF OUTPUT"`.

---

## Complexity
- **Time Complexity:** `O(n)` per test case
- **Space Complexity:** `O(1)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

15
28
6
56
60000
0


**Output**

PERFECTION OUTPUT
15 DEFICIENT
28 PERFECT
6 PERFECT
56 ABUNDANT
60000 ABUNDANT
END OF OUTPUT


---

## Notes
- Uses `setw(5)` to match UVa’s exact formatting requirements.
- Only proper divisors are counted.
- Output format must match exactly, including spacing and headers.

---

## Source
UVa Online Judge – Problem 382
