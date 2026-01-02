# UVa 12571 – Brother & Sisters

## Problem Description
You are given a list of integers representing family members’ attributes.

For each test case:
- An array `A` of `n` integers is given.
- You are asked `q` queries.
- For each query value `x`, compute:

\[
\max_{0 \le i < n} (A[i] \,\&\, x)
\]

Where `&` denotes the **bitwise AND** operation.

---

## Approach
This problem is solved using **bitwise operations with memoization**.

### Key Ideas:
- For each query `x`, compute the maximum value of `(A[i] & x)` over all elements.
- Since query values repeat and are bounded (`x < 240`), results can be **cached**.
- Memoization avoids recomputation and significantly improves performance.

---

## Algorithm
1. Read the number of test cases `t`.
2. For each test case:
   - Read integers `n` (array size) and `q` (number of queries).
   - Read the array `A`.
   - Initialize a memo array with `-1`.
3. For each query value `x`:
   - If `memo[x]` is already computed, print it.
   - Otherwise:
     - Compute `max(A[i] & x)` for all `i`.
     - Store the result in `memo[x]`.
     - Print the result.

---

## Complexity
- **Time Complexity (without memoization):** `O(n × q)`
- **Time Complexity (with memoization):** `O(n × U)`  
  where `U` is the number of distinct query values (≤ 240)
- **Space Complexity:** `O(n + U)`

---

## Language & Tools
- **Language:** C
- **Standard:** ANSI C / C99
- **Compiler Tested:** GCC / Clang

---

## Example
**Input**

1
5 3
1 2 3 4 5
1
2
3


**Output**

1
2
3


---

## Notes
- Bitwise AND is fast and efficient.
- Memoization drastically reduces repeated computation.
- Handles multiple test cases cleanly.
- Output format must match exactly.

---

## Source
UVa Online Judge – Problem 12571
