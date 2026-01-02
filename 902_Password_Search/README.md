# UVa 902 – Password Search

## Problem Description
Given:
- An integer `N`
- A string `message`

Your task is to find the **substring of length `N`** that appears **most frequently** in the given message.

If multiple substrings have the same maximum frequency, output the one that appears **first** in the message.

Input continues until EOF.

---

## Approach
This problem is solved using **sliding window substring counting**.

### Key Idea:
- Iterate over all substrings of length `N`.
- Use a hash map to count the frequency of each substring.
- Track the substring with the highest frequency while iterating.

---

## Algorithm
1. While input is available:
   - Read integer `N` and string `message`.
2. Initialize:
   - An unordered map to store substring frequencies.
   - Variables to track the maximum frequency and corresponding substring.
3. For each starting index `i` from `0` to `message.length() - N`:
   - Extract substring `message[i..i+N-1]`.
   - Increment its frequency in the map.
   - Update the most frequent substring if necessary.
4. Output the substring with the highest frequency.

---

## Complexity
- **Time Complexity:** `O(L × N)`  
  where `L` is the length of the message (substring extraction costs `O(N)`)
- **Space Complexity:** `O(L)` for storing substring frequencies

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

3
ABCDABCABC


**Output**

ABC


---

## Notes
- Uses `unordered_map` for average `O(1)` frequency updates.
- Substrings are processed in left-to-right order, ensuring correct tie-breaking.
- Handles multiple test cases until EOF.

---

## Source
UVa Online Judge – Problem 902
