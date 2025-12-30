# UVa 673 – Parentheses Balance

## Problem Description
Given several lines containing parentheses `()` and brackets `[]`, determine whether each line is **balanced**.

A line is considered balanced if:
- Every opening bracket has a matching closing bracket.
- Brackets are properly nested.
- The order of brackets is correct.

---

## Approach
This problem is solved using a **stack-based algorithm**.

### Key Idea:
- Push opening brackets (`(` and `[`) onto a stack.
- When encountering a closing bracket:
  - Check if the stack is empty or the top does not match.
  - If so, the line is unbalanced.
- At the end, the stack must be empty for the line to be balanced.

---

## Algorithm
1. Read integer `n`, the number of test cases.
2. For each test case:
   - Read the entire line as a string.
   - Initialize an empty stack.
   - Traverse each character:
     - Push opening brackets.
     - Match closing brackets with the stack top.
   - After traversal, ensure the stack is empty.
3. Output `"Yes"` if balanced, otherwise `"No"`.

---

## Complexity
- **Time Complexity:** `O(L)` per line, where `L` is the length of the string
- **Space Complexity:** `O(L)` in the worst case

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

3
([])
(([()])))
()


**Output**

Yes
No
Yes


---

## Notes
- Handles empty lines correctly.
- Ignores all characters except brackets.
- Uses `getline` to read full lines safely.

---

## Source
UVa Online Judge – Problem 673
