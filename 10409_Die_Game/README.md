# UVa 10409 – Die Game

## Problem Description
You are given a standard six-faced die initially placed with:
- `1` on top
- `6` on bottom
- `2` on north
- `5` on south
- `4` on east
- `3` on west

A sequence of commands is applied to the die:
- `north`
- `south`
- `east`
- `west`

Each command rolls the die one unit in the given direction.

Your task is to determine the number on the **top face** after all commands are executed.

Input ends when the number of commands is `0`.

---

## Approach
This problem is solved using **simulation of die rotations**.

### Key Idea:
- Track the values on all six faces of the die.
- For each command, update the face values accordingly.
- After processing all commands, output the value on the top face.

---

## Algorithm
1. While reading the number of commands:
   - If `0`, terminate.
   - Initialize the die faces.
2. For each command:
   - Update the die faces according to the direction.
3. Output the value on the top face.

---

## Complexity
- **Time Complexity:** `O(n)` per test case, where `n` is the number of commands
- **Space Complexity:** `O(1)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

4
north
south
east
west
0


**Output**


---

## Notes
- The die face values are updated using temporary variables.
- Only the top face value is required as output.
- Simulation ensures correctness for any command sequence.

---

## Source
UVa Online Judge – Problem 10409
