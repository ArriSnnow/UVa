# UVa 11879 – Multiple of 17

## Problem Description
You are given very large integers (up to 100 digits), one per line.

For each number, determine whether it is **divisible by 17**.

- Output `1` if the number is divisible by 17.
- Output `0` otherwise.
- Input ends when the number is exactly `"0"`.

---

## Approach
Because the numbers can be extremely large, they **cannot be stored in standard integer types**.

This problem is solved using **modular arithmetic on strings**.

### Key Idea:
To compute a large number modulo 17:
- Process the number digit by digit.
- Maintain the remainder using the formula:

\[
\text{remainder} = (\text{remainder} \times 10 + \text{digit}) \bmod 17
\]

If the final remainder is `0`, the number is divisible by 17.

---

## Algorithm
1. Read the input number as a string.
2. Stop if the input is `"0"`.
3. Initialize `remainder = 0`.
4. For each digit in the string:
   - Convert the character to an integer.
   - Update the remainder using modular arithmetic.
5. If the remainder is `0`, print `1`; otherwise print `0`.

---

## Complexity
- **Time Complexity:** `O(L)` per test case  
  where `L` is the number of digits
- **Space Complexity:** `O(1)`

---

## Language & Tools
- **Language:** C
- **Standard:** ANSI C / C99
- **Compiler Tested:** GCC / Clang

---

## Example
**Input**

34
201
170
0


**Output**

1
0
1


---

## Notes
- Uses string input to safely handle very large numbers.
- Avoids overflow by applying modulo at each step.
- Efficient and reliable for large inputs.
- Output format must match exactly.

---

## Source
UVa Online Judge – Problem 11879
