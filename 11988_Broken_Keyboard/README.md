# UVa 11988 – Broken Keyboard (Beiju Text)

## Problem Description
You are given lines of text typed on a **broken keyboard**.

Special keys behave as follows:
- `'['` → moves the cursor to the **beginning** of the line (Home key)
- `']'` → moves the cursor to the **end** of the line (End key)

All other characters are inserted at the current cursor position.

Your task is to reconstruct the final text after processing all keystrokes.

Input continues until EOF.

---

## Approach
This problem is solved using a **doubly linked list** to efficiently support insertions at arbitrary positions.

### Key Idea:
- Use a `list<char>` to represent the text.
- Maintain an iterator that represents the current cursor position.
- When `'['` is encountered, move the iterator to the beginning.
- When `']'` is encountered, move the iterator to the end.
- Insert normal characters at the iterator position.

This avoids costly string insertions.

---

## Algorithm
1. While reading each input line:
   - Initialize an empty list of characters.
   - Set an iterator to the beginning of the list.
2. For each character in the line:
   - If `'['`, move iterator to `begin()`.
   - If `']'`, move iterator to `end()`.
   - Otherwise, insert the character at the iterator position.
3. Output the contents of the list as a string.
4. Repeat until EOF.

---

## Complexity
- **Time Complexity:** `O(n)` per line  
  where `n` is the length of the input string
- **Space Complexity:** `O(n)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

This_is_a_[Beiju]_text


**Output**

BeijuThis_is_a__text

---

## Notes
- `std::list` allows efficient insertion at both ends and in the middle.
- Iterator manipulation avoids expensive string shifting.
- Output formatting must match exactly.

---

## Source
UVa Online Judge – Problem 11988
