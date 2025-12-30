# UVa 674 – Coin Change

## Problem Description
Given an amount `n` (0 ≤ n < 7500), determine how many different ways there are to produce `n` cents using U.S. coins of denominations:

- 1 cent
- 5 cents
- 10 cents
- 25 cents
- 50 cents

The order of coins does **not** matter.

---

## Approach
This problem is solved using **Dynamic Programming**.

We define an array `ways[i]` representing the number of ways to make `i` cents.

### Key Ideas:
- Initialize `ways[0] = 1` (one way to make 0 cents).
- For each coin, update the number of ways for all values from `coin` up to 7499.
- This ensures combinations are counted **without considering order**.

The solution precomputes all results once, then answers each query in constant time.

---

## Algorithm
1. Initialize an array `ways[7500]` with all values set to 0.
2. Set `ways[0] = 1`.
3. For each coin `{1, 5, 10, 25, 50}`:
   - For each amount from `coin` to `7499`:
     - `ways[j] += ways[j - coin]`
4. For each input `n`, output `ways[n]`.

---

## Complexity
- **Time Complexity:**  
  `O(5 × 7500)` ≈ `O(1)` (precomputation only once)
- **Space Complexity:**  
  `O(7500)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Notes
- Uses `long long` to safely store large counts.
- Precomputation makes the solution efficient for multiple test cases.
- No recursion is used.

---

## Example

**Input**
11
26

**Output**
4
13

## Source
UVa Online Judge – Problem 674
