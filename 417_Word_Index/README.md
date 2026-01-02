# UVa 417 – Word Index

## Problem Description
Each word composed of **strictly increasing lowercase letters** (`a`–`z`) is assigned a unique index.

Rules:
- Letters must be in **alphabetical order**.
- No repeated letters.
- Word length ranges from **1 to 5**.
- Indexing starts at **1** and follows lexicographical order.

Given a word, your task is to output its corresponding index.  
If the word is invalid, output `0`.

Input continues until EOF.

---

## Key Insight
All valid words correspond to **combinations** of letters from `'a'` to `'z'`:

- Length 1 → all single letters
- Length 2 → all increasing pairs
- …
- Length 5 → all increasing 5-letter combinations

The total number of such words is limited and can be **precomputed**.

---

## Approach
This problem is solved using **precomputation with combinatorics**.

### Key Ideas:
- Generate all valid combinations of letters of length 1 to 5.
- Store each word with its assigned index in a map.
- For each input word:
  - Look it up in the map.
  - Output its index or `0` if it does not exist.

---

## Algorithm
1. Precompute all valid words:
   - For word lengths 1 to 5:
     - Generate combinations using a boolean selector array.
     - Build words in lexicographical order.
     - Assign increasing indices.
2. Read input words until EOF.
3. For each word:
   - Output its index from the map.
   - If not found, output `0`.

---

## Complexity
### Precomputation
- **Time Complexity:** `O(C(26,1) + C(26,2) + ... + C(26,5))`
- **Space Complexity:** `O(total_valid_words)`

### Query
- **Time Complexity:** `O(1)` average (map lookup)
- **Space Complexity:** `O(1)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

a
ab
ba
abc


**Output**

1
27
0
352


---

## Notes
- Uses `prev_permutation` to generate combinations efficiently.
- Map allows fast lookup of word indices.
- Words must be strictly increasing to be valid.
- Precomputation ensures fast runtime during input processing.

---

## Source
UVa Online Judge – Problem 417
