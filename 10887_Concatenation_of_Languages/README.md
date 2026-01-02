# UVa 10887 – Concatenation of Languages

## Problem Description
You are given two sets of strings representing two languages:

- Language A with `M` words
- Language B with `N` words

By concatenating **one word from Language A** with **one word from Language B**, a new word is formed.

Your task is to determine how many **distinct words** can be created by all possible concatenations.

---

## Approach
This problem is solved using **hash-based uniqueness checking**.

### Key Idea:
- Generate all possible concatenations `a + b`, where:
  - `a ∈ Language A`
  - `b ∈ Language B`
- Store each concatenated string in a hash set.
- The size of the set gives the number of distinct concatenations.

---

## Algorithm
1. Read the number of test cases `T`.
2. For each test case:
   - Read integers `M` and `N`.
   - Read `M` strings into list `A`.
   - Read `N` strings into list `B`.
3. Initialize an empty `unordered_set<string>`.
4. For every string `a` in `A`:
   - For every string `b` in `B`:
     - Insert `a + b` into the set.
5. Output the size of the set with the required case format.

---

## Complexity
- **Time Complexity:** `O(M × N × L)`
  - `L` is the average length of the concatenated strings
- **Space Complexity:** `O(M × N)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

1
2 3
a
b
c
d
e


**Output**

Case 1: 6


---

## Notes
- Uses `unordered_set` to automatically handle duplicates.
- String concatenation is straightforward and efficient for given constraints.
- Output format must match exactly, including case numbering.

---

## Source
UVa Online Judge – Problem 10887
