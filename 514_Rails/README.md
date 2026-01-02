# UVa 514 – Rails

## Problem Description
A railway station uses a **single stack (station siding)** to reorder train coaches.

- Coaches arrive in **increasing order** from `1` to `n`.
- Using the station (a stack), you want to determine whether it is possible to rearrange the coaches into a given **target order**.
- You may push arriving coaches into the station and pop them out to the output.
- Input ends when `n = 0`.
- For each `n`, multiple target permutations are given, ending with a line starting with `0`.

For each target permutation, output:
- `"Yes"` if the permutation can be achieved
- `"No"` otherwise

---

## Approach
This problem is solved using **stack simulation**.

### Key Idea:
- Coaches arrive sequentially from `1` to `n`.
- Each arriving coach is pushed onto the stack.
- Whenever the top of the stack matches the next required coach in the target sequence, it is popped.
- If all coaches can be popped in the desired order, the permutation is possible.

---

## Algorithm
1. Read integer `n`.
2. If `n == 0`, terminate the program.
3. For each target permutation:
   - If the first value is `0`, print a blank line and move to the next `n`.
   - Read the full target sequence.
4. Simulate:
   - Push coaches from `1` to `n` onto a stack.
   - While the stack top matches the next target coach, pop it.
5. If the stack is empty after processing, output `"Yes"`, otherwise `"No"`.

---

## Complexity
- **Time Complexity:** `O(n)` per permutation
- **Space Complexity:** `O(n)` for the stack

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

5
1 2 3 4 5
5 4 3 2 1
1 2 5 3 4
0
0


**Output**

Yes
Yes
No


---

## Notes
- Uses a stack to model the station siding.
- Blank line is required between different values of `n`.
- This is a classic **stack permutation** problem.

---

## Source
UVa Online Judge – Problem 514
