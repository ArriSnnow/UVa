# UVa 10260 – Soundex

## Problem Description
Soundex is a phonetic algorithm for indexing words by their pronunciation.

Given a word, convert it into a **Soundex code** by mapping each letter to a digit according to the following rules:

| Digit | Letters         |
|------:|-----------------|
| 1     | B F P V         |
| 2     | C G J K Q S X Z |
| 3     | D T             |
| 4     | L               |
| 5     | M N             |
| 6     | R               |

Rules:
- Output the digit corresponding to each letter.
- **Do not output consecutive duplicate digits**.
- Letters that do not appear in the table are ignored.
- Input continues until EOF.

---

## Approach
This problem is solved using **character grouping and state tracking**.

### Key Idea:
- Map letters into six Soundex groups.
- Traverse the word character by character.
- Output a digit only when the current letter’s group is **different from the previous group**.
- Reset grouping when encountering letters not in any Soundex group.

---

## Algorithm
1. Define the six Soundex groups as strings.
2. For each input word:
   - Initialize an empty result string.
   - Track the previously used Soundex group.
3. For each character in the word:
   - Determine which Soundex group it belongs to.
   - If the group is different from the previous one:
     - Append the corresponding digit.
   - Update the previous group.
   - If the character does not belong to any group, reset the previous group.
4. Output the resulting Soundex code.

---

## Complexity
- **Time Complexity:** `O(L × G)`  
  where `L` is the length of the word and `G = 6` Soundex groups
- **Space Complexity:** `O(1)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

Washington
Lee
Gutierrez
Pfister


**Output**

25235
4
2362
1236


---

## Notes
- Consecutive letters mapping to the same digit are collapsed.
- Letters not in any Soundex group reset repetition checking.
- Output formatting is strict: one line per word.

---

## Source
UVa Online Judge – Problem 10260
