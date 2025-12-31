# UVa 12289 – One-Two-Three

## Problem Description
You are given a word that represents a number written in English:
- `"one"`
- `"two"`
- `"three"`

However, the word may contain **at most one incorrect letter**.

Your task is to determine which number the word represents and output:
- `1` for `"one"`
- `2` for `"two"`
- `3` for `"three"`

---

## Approach
This problem is solved using **string length and character matching**.

### Key Observations:
- The word `"three"` has length 5 and is unique.
- The words `"one"` and `"two"` both have length 3.
- For length-3 words, checking how many characters match `"one"` is sufficient:
  - If at least 2 characters match `"one"`, the answer is `1`.
  - Otherwise, the answer is `2`.

---

## Algorithm
1. Read the number of test cases.
2. For each test case:
   - Read the input string.
   - If the length is 5, output `3`.
   - Otherwise:
     - Count how many characters match `"one"`.
     - If matches ≥ 2, output `1`.
     - Else output `2`.

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
one
two
thrre


**Output**

1
2
3


---

## Notes
- The solution tolerates one incorrect character as required.
- Uses direct character comparison for simplicity.
- Very efficient and easy to implement.

---

## Source
UVa Online Judge – Problem 12289
